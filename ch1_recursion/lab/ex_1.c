#include<stdio.h>

// using a tail recursive function.
int fact_helper(int n,int a){
    if(n<0)return -1;
    if(n==0 || n==1)return a;
    return fact_helper(n-1,a*n);
}

int fact(int n){
    return fact_helper(n,1);
}

void main(){
    int n=12;
    printf("The factorial of %i is %i",n,fact(n));
}