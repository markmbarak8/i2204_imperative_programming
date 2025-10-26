#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *after;
};

void change2null(struct node** headref){
    *headref=NULL;
}

void Push(struct node **headref,int d){
    struct node* new_node=(struct node*)calloc(1,sizeof(struct node));
    new_node->data=d;
    new_node->after=*headref;
    *headref=new_node;
}

void main(){
    // struct node *head1,*head2;
    // change2null(&head1);
    // change2null(&head2);
    // printf("%p %p",head1,head2);
    struct node *head=NULL;
    for(int i=1;i<8;i++){
        Push(&head,i);
    }
    for(struct node *current=head;current!=NULL;current=current->after){
        printf("%d ",current->data);
    }
}