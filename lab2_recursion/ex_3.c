#include<stdio.h>

void binaryrec(int n){
    if(n==0)return;
    binaryrec(n/2);
    if(n%2==0)printf("%d",0);
    else printf("%d",1);
}

void main(){
    binaryrec(16);
}