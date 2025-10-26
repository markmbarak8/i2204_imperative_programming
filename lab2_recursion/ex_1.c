#include<stdio.h>

// int fact(int n){
//     if(n==0 || n==1)return 1;
//     return n*fact(n-1);

// }

int fact_helper(int n,int r){
    if(n==1 || n==0)return r;
    return fact_helper(n-1,r*n);
}

int fact(int n){
    return fact_helper(n,1);
}

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d.\n",n,fact(n));
}