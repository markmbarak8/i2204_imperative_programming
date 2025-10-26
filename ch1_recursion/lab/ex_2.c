#include<stdio.h>

float harm_helper(int n,float a){
    if(n<=0)return -1;
    if(n==1)return a+n;
    return harm_helper(n-1,a+(1/(float)n));
}

float harmonic(int n){
    // if(n<=0)return -1;
    // if(n==1)return 1;
    // return harmonic(n-1)+(1/(float)n);
    return harm_helper(n,0);
}
void main(){
    int n=6;
    printf("The sum of the harmonic series up to 1/%i is %.2f.",n,harmonic(n));
}

