#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *after;
};

void append(struct node **head,int d){
    struct node* new_node=(struct node*)calloc(1,sizeof(struct node));
    new_node->data=d;
    new_node->after=NULL;
    if(*head==NULL){
        *head=new_node;
        return;
    }
    struct node* current=*head;
    for(;current->after!=NULL;current=current->after);
    current->after=new_node;
}

struct node *Addattail(){
    struct node *head=NULL;
    for(int i=0;i<11;i++){
        append(&head,i);
    }
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
    struct node *head=Addattail();
    printlist(&head);
    emptylist(&head);
}