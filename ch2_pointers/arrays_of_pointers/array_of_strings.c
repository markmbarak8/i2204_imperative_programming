#include<stdio.h>


void main(){
    char a1[][20]={"Hi","How are you?","My name is Ali."};
    char *a2[]={"Hi","How are you?","My name is Ali."};
    // the difference between the first array and the second array is in size; where a1 took 60 bytes while a2 took 24;
    // this is because a1 behaves like a 2-d array, counting 20 bytes for each item while a2 behaves like a jagged array
    printf("%d\n",sizeof(a1)/sizeof(char));
    printf("%d\n",sizeof(a2)/sizeof(char));
}