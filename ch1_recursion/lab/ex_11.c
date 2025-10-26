#include<stdio.h>

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

void main(){
    int a=49,b=14;
    printf("The gcd between %i and %i is %i.",a,b,gcd(a,b));
}