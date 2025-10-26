#include<stdio.h>

void main(){
    int * p;
    char* q;
    // any pointer can point anywere in memory
    // all pointer arithmetic is done relative to it's base type

    // Two special operators for pointers:
    //          - Addressing or reference operator &
    //          - Dereference operator *

    int age=22;
    int *m=&age; //memmory address of age
    printf("The variable age %i is locted at %p.\n",age,m); // %p uset to print memmory addresses
    // we can use * to dereference m and get the value located there
    printf("My age is %i.",*m);
    // Note: using a pointer with incompatible type can lead to unexpected behavior such as displaying
    // garbage value example:
    /*double x=100.1,y;
    int *u=&x;
    y=*u;
    printf("%i\n",y);*/
}