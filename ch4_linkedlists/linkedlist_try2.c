#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* after;
};

struct node *Createlist(){
    struct node* head=NULL;
    return head;
}

int listlen(struct node** headref){
    struct node* current=*headref;
    int i=0;
    for(;current!=NULL;current=current->after,i++);
    return i;

}

void Push(struct node** headref,int val){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->after=*headref;
    *headref=newnode;
}

void addatend(struct node** headref,int val){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->after=NULL;
    struct node* current=*headref;
    if(current==NULL){
        Push(headref,val);
        return;
    }
    for(;current->after!=NULL;current=current->after);
    current->after=new_node;
}

void addatindex(struct node** headref,int idx,int val){
    int l=listlen(headref);
    if(idx<0 || idx>l){
        printf("Index out of range.\n");
        return;
    }
    struct node *current=*headref;
    if(idx==0){
        Push(headref,val);
    }
    int i=0;
    for(;i!=(idx-1);i++,current=current->after);
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=val;
    new_node->after=current->after;
    current->after=new_node;
}


void printlist(struct node** headref){
    if(*headref==NULL){
        printf("List is empty!\n");
        return;
    }
    struct node* current=*headref;
    for(current;current!=NULL;current=current->after){
        printf("%i ",current->data);
    }
}

void emptylist(struct node** headref){
    if(*headref==NULL){
        printf("List is empty!\n");
        return;
    }
    struct node* current=*headref;
    while(current!=NULL){
        struct node* after=current->after;
        free(current);
        current=after;
    }
    *headref=NULL;
}

void removefirst(struct node**headref){
    if(*headref==NULL){
        printf("List is empty.\n");
        return;
    }
    if((*headref)->after==NULL){
        free(*headref);
        *headref=NULL;
        return;
    }
    struct node *after=(*headref)->after;
    free(*headref);
    *headref=after;
}

void main(){
    struct node* head1=Createlist(),*head2=Createlist(),*head3=Createlist();
    for(int i=0;i<10;i++){
        addatend(&head1,i);
    }
    addatindex(&head1,listlen(&head1),122);
    removefirst(&head1);
    removefirst(&head1);
    removefirst(&head1);
    removefirst(&head1);
    // Push(&head2,32);
    // printlist(&head2);
    // removefirst(&head2);
    // printlist(&head2);
    printlist(&head1);
    emptylist(&head1);

}