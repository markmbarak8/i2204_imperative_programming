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

struct node* Buildwithspecialcase(){
    struct node* head=NULL;
    struct node* tail;

    Push(&head,1);
    tail=head;

    for(int i=2;i<6;i++){
        Push(&(tail->after),i);
        tail=tail->after;
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
    struct node *head=Buildwithspecialcase();
    printlist(&head);
    emptylist(&head);
}