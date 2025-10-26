#include<stdio.h>
#include<math.h>

int bin_helper(int n,int a,int c){
    if(n==0)return a;
    if(n%2==0)return bin_helper(n/2,a,c+1);
    else return bin_helper(n/2,a+pow(10,c),c+1);
}

int bin(int n){
    return bin_helper(n,0,0);
}

void main(){
    int n=32;
    printf("%i in binary is %i.",n,bin(n));
}