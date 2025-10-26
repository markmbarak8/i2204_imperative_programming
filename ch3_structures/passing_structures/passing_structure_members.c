#include<stdio.h>

typedef struct{
    int x,y;
}Point;

void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

void main(){
    Point a={10,5},b={2,4};
    swap(&a.x,&b.y);
    // int temp=a.x;
    // a.x=b.y;
    // b.y=temp;
    printf("%d %d.\n",a.x,b.y);
}