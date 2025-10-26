#include<stdio.h>

typedef struct{
    int x,y;
} Point;

void main(){
    Point a={10,5},b;
    b=a; // you can assign a struct to another struct of the same datatype

    a.y+=10; 

    printf("%d\n",a.y);
    printf("%d\n",b.y);
}