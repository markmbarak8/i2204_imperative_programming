#include<stdio.h>

int fact(int x){
    // using iteration

    // int r=1;
    // for(int i=1;i<=x;i++){
    //     r*=i;
    // }
    // return r;

    // Using Recursion
    if (x<0) return -1;
    if (x==0) return 1;
    return x*fact(x-1);

    // Direct recursion: A function is said to be direct recursive if it calls itelf directly.
    // Indirect recursive: A function is said to be indirect recursive if it calls another function and
    // this new function calls the first calling function again
}

// A funtion that returns the nth fibbonaci number
int fibo(int n){
    if(n==0 || n==1) return n;
    return fibo(n-1)+fibo(n-2);
}

//recursion has 2 parts: winding and unwinding;
// winding : reaching the base case;
// unwinding : returning to the main function.

int func1(int);
int func2(int);

int gcd(int,int);

void main(){
    int n=40;
    // printf("The factorial of %i is %i.\n",n,fact(n));
    printf("The %ith fibbonachi number is: %i.",n,fibo(n));
    // printf("%i",gcd(32,24));
}

// example of indirect recurion
int func1(int n){
    if(n<=1) return 1;
    return func2(n);
}
int func2(int n){
    return func1(n);
}

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}