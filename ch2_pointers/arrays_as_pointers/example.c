#include<stdio.h>

void printArray(int arr[],int s){
    for(int *i=arr;i<arr+s;i++){
        printf("%d ",*i);
    }
}

void main(){
    int A[]={5,8,9};
    int s=sizeof(A)/sizeof(int);
    // We want to increment each element by 1 we can do it using 2 methods
    // method 1: regular iteration
    // for(int i=0;i<s;i++){
    //     A[i]++;
    // }
    // printArray(A,s);

    // method 2: pointer arithmetic
    for(int *p=A;p<A+s;p++){
        (*p)++;
    }
    printArray(A,s);
}