#include<stdio.h>

int bino_helper(int n,int k,int a,int c,int u,int v){
    if(n<k)return -1;
    if(n==k){
        return a/v;
    }
    if(c==k){
        return a/u;
    }
    return bino_helper(n-1,k,a*n,c+1,u*(c+1),v*(n-c-1));
}

int binomial(int n,int k){
    return bino_helper(n,k,1,0,1,1);
}

void main(){
    int n=6,k=3;
    printf("The number of combinations of %i out of %i are %i.",k,n,binomial(n,k));
}