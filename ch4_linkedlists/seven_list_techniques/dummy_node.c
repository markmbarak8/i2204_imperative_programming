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

struct node* Buildwithdummynode(){
    struct node dummy;
    dummy.after=NULL;
    struct node* tail=&dummy;
    for(int i=1;i<11;i++){
        Push(&(tail->after),i);
        tail=tail->after;
    }
    return dummy.after;
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
    struct node *head=Buildwithdummynode();
    printlist(&head);
    emptylist(&head);
}