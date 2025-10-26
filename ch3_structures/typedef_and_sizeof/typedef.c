#include<stdio.h>

// typedef is a keyword used in C language to assign alternative names to existing datatypes
typedef const long double CONST;

// typedefs and structs
typedef struct{
    char name[30];
    float salary;
    unsigned long phone;
}employee; // we can use typedef with anonymous type declerations to get rid of the keyword struct in initialization

void main(){
    CONST PI=3.1415926535,E=2.7182818284; // instead of typing const long double.

    employee a={"Mark",100000,78871469};
    printf("%s's phone number is %lu.\nHe makes %.0f$ each year.\n",a.name,a.phone,a.salary);

}