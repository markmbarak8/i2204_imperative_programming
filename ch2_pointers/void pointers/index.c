#include<stdio.h>


void main(){
    // void pointers are pointers of universal datatype that can point to a variable of any datatype
    // however before dereferencing a void pointer we must type cast it first
    int a=3,b,*i;
    float x=3.14,y,*f;
    void *p;
    p=&a;
    printf("%d\n",*(int *)p);
    i=p;
    b=*(int *)p;
    printf("%d\n",*i);
    printf("%d\n",b);
    p=&x;
    printf("%.2f\n",*(float *)p);
    f=p;
    y=*(float *)p;
    printf("%.2f\n",*f);
    printf("%.2f\n",y);
}