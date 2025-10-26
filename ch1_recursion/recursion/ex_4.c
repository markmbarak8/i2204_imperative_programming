#include<stdio.h>

// void printtriangle(int n,int x){
//     if(x>n)return;
//     for(int i=0;i<x;i++){
//         printf("*");
//     };
//     printf("\n");
//     printtriangle(n,x+2);
// }

//ANOTHER METHOD
void triangle(int n){
    if(n<=0)return;
    triangle(n-2);
    for(int i=0;i<n;i++)printf("*");
    printf("\n");
}

void main(){
    // printtriangle(8,2);
    triangle(9);
}