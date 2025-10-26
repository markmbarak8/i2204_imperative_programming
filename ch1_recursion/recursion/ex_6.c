#include<stdio.h>

int fact(int n);
int helper(int a,int b);

void main(){
    int n=3;
    printf("factorial of %i = %i.",n,fact(n));
}

int helper(int a,int b){
    if(a==0)return b;
    return helper(a-1,b*a);
}

int fact(int n){
    return helper(n,1);
}