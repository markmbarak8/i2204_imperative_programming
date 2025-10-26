#include<stdio.h>

void main(){
    // we can compare pointers to see which is lower memory
    int a=5;
    int *p=&a,*q;
    // if(p<q)printf("%p is lower than %p",p,q);
    // else printf("%p is higher than %p",p,q);
    int n;
    if(p<q){
        n=q-p;
        q-=n;
        printf("The value of a is %i.",*q);
    }
    else if(p==q)printf("The value of a is %i.",*q);
    else{
        n=p-q;
        q+=n;
        printf("The value of a is %i.",*q);
    }
}