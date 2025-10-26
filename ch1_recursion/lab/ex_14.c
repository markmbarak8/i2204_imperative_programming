#include<stdio.h>

int rev_helper(int n,int reverse){
    if(n==0)return reverse;
    return rev_helper(n/10,reverse*10+n%10);
}

int rev(int n){
    return rev_helper(n,0);
}

void main(){
    int n=435779;
    printf("The reverse of %i is %i.",n,rev(n));
}