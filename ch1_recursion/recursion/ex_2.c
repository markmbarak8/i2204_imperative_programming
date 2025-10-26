#include<stdio.h>

int countdigits(int n){
    if(n<10 && n>-10) return 1;
    return 1+countdigits(n/10);
}

// VEERY IMPORTANT NOTE
// int countdigits(int n){
//     static int ctr=0;
//     if(n!=0){
//         ctr++;
//         countdigits(n/10);
//     }
//     return ctr;
// }
// the above code uses a static variable(variable that is fixed during calls)
// to find the counter, this is wrong and can lead to unexpected behaviour


void main(){
    int n;
    printf("N: ");
    scanf("%i",&n);
    printf("The number of digits in n are: %i",countdigits(n));
}