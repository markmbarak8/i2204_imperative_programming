//Tail vs non_tail recursion:
// Tail recursion: after the last recursive call, there is nothing left to do except return (example quicksort)
// Non-tail recursion: after the last recursive call there is still some additional work to do; usualu arithmetic operations with the returned value (ex: facctorial,sum,num_of_digits)
// In C, the compiler is optimised to compute the tail_recursive function from the last call and give the result last
#include<stdio.h>

void print(int n){
    if(n<1) return;
    printf("%d\n",n);
    print(n-1);
}

void main(){
    print(5);
}