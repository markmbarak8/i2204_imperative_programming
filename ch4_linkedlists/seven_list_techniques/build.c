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

struct node* Addathead(){
    struct node *head=NULL;
    for(int i=0;i<11;i++){
        Push(&head,i);
    }
    return head;
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
    struct node *head=Addathead();
    for(struct node* current=head;current!=NULL;current=current->after){
        printf("%d ",current->data);
    }
    emptylist(&head);
}
