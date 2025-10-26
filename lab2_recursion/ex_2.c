#include<stdio.h>

float harm_helper(int n,float i){
    if(n==0)return i;
    return harm_helper(n-1,i+(1/(float)n));
}

float harm_rec(int n){
    return harm_helper(n,0);
}

void main(){
    int n=3;
    printf("%f",harm_rec(n));
}