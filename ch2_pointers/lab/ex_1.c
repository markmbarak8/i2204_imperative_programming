#include<stdio.h>


void main(){
    int i,j;
    int *pi,*pj;
    i=5;j=3;
    pi=&i;pj=&j;
    printf("pi=%p pj=%p\n",pi,pj);
    printf("The value pointed by pi=%d\nThe value pointed by pj=%d\n",*pi,*pj);
    ++*pi; // dereference pi then increment the value
    pj=pi;
    printf("The value pointed by pj=%d\n",*pj); //6
    i+=2;
    printf("The value pointed by pj=%d\n",*pj); //8
}