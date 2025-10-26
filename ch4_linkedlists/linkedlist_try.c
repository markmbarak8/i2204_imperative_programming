#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *after;
};

typedef struct{
    struct node head;
    int size;
}LinkedList;

LinkedList Init(){
    LinkedList L;
    L.size=0;
    return L;
}

void append(LinkedList* L,int val){
    if(L->size==0){
        L->head.data=val;
        L->head.after=NULL;
        (L->size)++;
        return;
    }
    struct node *new=(struct node *)calloc(1,sizeof(struct node));
    new->data=val;
    new->after=NULL;
    struct node *n=&L->head;
    while(n->after!=NULL)
    {
        n=n->after;
    }
    n->after=new;
    (L->size)++;
}

void appendleft(LinkedList* L,int val){
    if(L->size==0){
        L->head.data=val;
        L->head.after=NULL;
        (L->size)++;
        return;
    }
    struct node *new=(struct node *)calloc(1,sizeof(struct node));
    new->data=L->head.data;
    new->after=L->head.after;
    L->head.data=val;
    L->head.after=new;
    (L->size)++;
}

void pop(LinkedList *L){
    if(L->size==0){
        printf("Linkedlist empty.\n");
        return;
    }
    if(L->head.after==NULL){
        (L->size)--;
        return;
    }
    struct node *n=&L->head;
    while(1){
        if(n->after->after==NULL)break;
        n=n->after;
    }
    free(n->after);
    n->after=NULL;
    (L->size)--;
}

void popleft(LinkedList *L){
    if(L->size==0){
        printf("Linkedlist empty.\n");
        return;
    }
    if(L->head.after==NULL){
        (L->size)--;
        return;
    }
    int data=L->head.after->data;
    struct node* after=L->head.after->after;
    free(L->head.after);
    L->head.data=data;
    L->head.after=after;
    (L->size)--;
}

void printlist(LinkedList L){
    struct node n=L.head;
    if(L.size==0){
        printf("Linkedlist empty.\n");
        return;
    }
    while (1)
    {
        printf("%i ",n.data);
        if(n.after==NULL)break;
        n=*(n.after);
    }
    printf("\n"); 
}

void main(){
    LinkedList L=Init();
    appendleft(&L,9);
    printf("%i\n",L.size);
    popleft(&L);
    printf("%i\n",L.size);
    printlist(L);
    appendleft(&L,4);
    printf("%i\n",L.size);
    printlist(L);
}