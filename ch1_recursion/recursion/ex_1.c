#include<stdio.h>

int sum(int n){
    // iterative approach
    // int sum=0;
    // for(int i=1;i<=n;i++) sum+=i;
    // return sum;

    // recursive approach
    if(n==1) return n;
    return sum(n-1)+n;
}


void main(){
    int n;
    printf("n: ");
    scanf("%i",&n);
    printf("n sum = %i",sum(n));
}