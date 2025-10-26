#include<stdio.h>

void triangle(int n){
    if(n<=0)return;
    for(int i=0;i<n;i++)printf("*");
    printf("\n");
    triangle(n-2);
}

void main(){
    triangle(9);
}