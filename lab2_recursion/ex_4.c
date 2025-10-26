#include<stdio.h>



int binomialrec(int n,int k){
    if(k==0 || k==n)return 1;
    return binomialrec(n-1,k-1)+binomialrec(n-1,k);
}

void main(){
    printf("%d",binomialrec(6,3));
}