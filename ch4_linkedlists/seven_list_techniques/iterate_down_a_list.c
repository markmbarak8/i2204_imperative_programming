#include<stdio.h>

struct node{
    int val;
    struct node * after;
};

int length(struct node* head){
    int count=0;
    for(struct node*current=head;current!=NULL;current=current->after,count++);
    return count;
}

void main(){
    struct node head={2,NULL};
    struct node two={3,NULL};
    head.after=&two;
    struct node three={4,NULL};
    two.after=&three;
    printf("%d\n",length(&head));
}