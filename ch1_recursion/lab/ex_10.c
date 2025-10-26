#include<stdio.h>

int helper_sum(int n,int sum){
    if(n==0)return sum;
    return helper_sum(n/10,sum+(n%10));
}

int sum_digits(int n){
    // if(n==0)return 0;
    // return n%10 + sum_digits(n/10);
    if(n<0)return -1;
    return helper_sum(n,0);
}


void main(){
    int n=5553;
    printf("The sum of the digits of %i is %i.",n,sum_digits(n));
}