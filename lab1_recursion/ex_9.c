#include<stdio.h>

int powerhelper(int n,int a,int i,int v){
    if(a==i)return n;
    return powerhelper(n*v,a,i+1,v);
}

int power(int n,int a){
    return powerhelper(1,a,0,n);
}

void main(){
    int n,a;
    printf("Enter the base: ");
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&a);
    printf("%d to the power %d is %d.\n",n,a,power(n,a));
}