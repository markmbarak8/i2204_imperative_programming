#include<stdio.h>

void swap(int *a, int *b){
    int temp=*a;
    // Always write this code to check null pointers
    if(a==NULL || b==NULL)return;
    (*a)=(*b);
    (*b)=temp;
}

void swapTest(){
    int a=2,b=3;
    printf("The old values of a and b are %i and %i respectively.\n",a,b);
    swap(&a,&b);
    printf("The new values of a and b are %i and %i respectively.\n",a,b);
}

void main(){
    // write a function that swaps the values of two variables int
    swapTest();
}