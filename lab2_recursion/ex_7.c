#include<stdio.h>

int sum_helper(int a,int b,int sum){
    if(a==b+1)return sum;
    return sum_helper(a+1,b,sum+a);
}

int sum(int a,int b){
    return sum_helper(a,b,0);
}

void main(){
    printf("%d",sum(3,7));
}