#include<stdio.h>

void helper_print(int n,int st){
    if(n<0)return;
    if(st==n+1)return;
    printf("%d ",st);
    helper_print(n,st+1);
}

void print(int rng){
    helper_print(rng,0);
}

void main(){
    int n=9;
    print(n);
}