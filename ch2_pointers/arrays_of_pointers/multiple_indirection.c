#include<stdio.h>

void main(){
    // we can have pointers that point to other pointers as well;
    int x=10;
    int *p=&x;
    int **r=&p;
    printf("%p\n",p);
    printf("%p\n",r);
    printf("%p\n",*r); // dereferencing r will give the address of x which is p, not the value
    printf("%i\n",**r);
    *p=20;
    **r=30;
    printf("%i\n",x);
}