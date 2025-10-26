#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *after;
};

void Push(struct node **headref,int d){
    struct node* new_node=(struct node*)calloc(1,sizeof(struct node));
    new_node->data=d;
    new_node->after=*headref;
    *headref=new_node;
}

struct node *Buildwithlocalref(){
    struct node *head=NULL;
    struct node** lastPtrref=&head;
    for(int i=0;i<11;i++){
       Push(lastPtrref,i);
       lastPtrref=&((*lastPtrref)->after);
    }
    // NOTE:
    // *ptrref=(*ptrref)->after used to skip a node
    // ptrref=&((*ptrref)->after) used to get to the next node.
    return head;
}

void printlist(struct node** headref){
    for(struct node* current=*headref;current!=NULL;current=current->after){
        printf("%d ",current->data);
    }
}

void emptylist(struct node **head){
    struct node* current=*head;
    while(current!=NULL){
        struct node* a=current->after;
        free(current);
        current=a;
    }
    *head=NULL;
}

void main(){
    struct node *head=Buildwithlocalref();
    printlist(&head);
    emptylist(&head);
}