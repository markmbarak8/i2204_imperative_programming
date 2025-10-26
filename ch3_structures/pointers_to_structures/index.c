#include<stdio.h>

typedef struct{
    char city[20];
    int zipcode;
}address;

typedef struct{
    char name[30];
    float salary;
    unsigned long phone;
    address addr;
}employee;

void main(){
    employee e={"Mark",100000,78871469,{"Aley",3250}};
    employee *pe=&e; // pointer to the address of e

    // access zipcode using pe
    // (*pe).addr.zipcode+=6; // becomes more complicated with more nested structures and more pointers
    // use the arrow operator
    pe->addr.zipcode+=6;
    printf("%d\n",pe->addr.zipcode); // arrow operator a->b equivalent to (*a).b
}