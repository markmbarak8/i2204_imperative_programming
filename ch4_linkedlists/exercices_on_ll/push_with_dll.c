#include<stdio.h>
#include<stdlib.h>

struct node{
    float data;
    struct node* next;
    struct node* prev;
};

void Push(struct node **headref,float data){
    struct node* new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=data;
    if(*headref==NULL){
        new_node->next=new_node;
        new_node->prev=new_node;
    }
    else{
        new_node->next=*headref;
        new_node->prev=(*headref)->prev;
        new_node->prev->next=new_node;
        new_node->next->prev=new_node;
    }
    *headref=new_node;
}

void printlist(struct node** headref){
    if(*headref==NULL){
        printf("List is empty!\n");
        return;
    }
    struct node* current=(*headref)->prev;
    for(current;current!=(*headref);current=current->prev){
        printf("%.2f ",current->data);
    }
    printf("%.2f ",(*headref)->data);
}

void emptylist(struct node** headref){
    if(*headref==NULL){
        printf("List is empty!\n");
        return;
    }
    struct node* current=(*headref)->next;
    while(current!=(*headref)){
        struct node* after=current->next;
        free(current);
        current=after;
    }
    *headref=NULL;
}


void main(){
    struct node* head=NULL,**tailref=&head;
    for(int i=0;i<11;i++){
        Push(&head,i);
    }
    printlist(&head);
    emptylist(&head);
}