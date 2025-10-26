#include<stdio.h>

long long pow_helper(int x,int y,long long a){
    if(y==0)return 1;
    if(y==1)return a;
    return pow_helper(x,y-1,a*x);
}

long long pow_(int x,int y){
    return pow_helper(x,y,x);
}

void main(){
    int x=3,y=6;
    printf("%i to the power of %i is: %i.",x,y,pow_(x,y));
}