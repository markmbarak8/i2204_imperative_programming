#include<stdio.h>

void Permute(int *,int *);

void main(){
    int a,b;
    printf("a: ");scanf("%i",&a);
    printf("b: ");scanf("%i",&b);
    Permute(&a,&b);
    printf("a=%d b=%d.\n",a,b);
}

void Permute(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}