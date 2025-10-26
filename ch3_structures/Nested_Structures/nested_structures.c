#include<stdio.h>

// we can implement structures inside structures

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
    employee e={"Mark",100000,78871469,{"Aley",3256}};
    printf("\
            Name    : %s\n\
            Salary  : %.0f$\n\
            phone   : %ul\n\
            city    : %s\n\
            zipcode : %i\n",e.name,e.salary,e.phone,e.addr.city,e.addr.zipcode);
}