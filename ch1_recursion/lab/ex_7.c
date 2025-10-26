#include<stdio.h>

int sum_helper(int n,int a){
    if(n==0)return a;
    return sum_helper(n-1,a+n);
}

int sum(int n){
    return sum_helper(n,0);
}

void main(){
    int n=6;
    printf("The sum of the integers up to %i is %i.",n,sum(n));
}