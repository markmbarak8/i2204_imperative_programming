#include<stdio.h>

int fibo_helper(int n,int a){
    
}

int fibo(int n){
    // if(n==1 || n==0) return n;
    // return fibo(n-1)+fibo(n-2);
    return fibo_helper(n,1);
}

void main(){
    int n=10;
    printf("The %ith fibonacci number is: %i.",n,fibo(n));
}