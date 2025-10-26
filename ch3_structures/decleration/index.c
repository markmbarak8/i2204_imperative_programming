#include<stdio.h>

// There are three ways of declaring a struct
struct employee{
    char name[30];
    float salary;
    unsigned long phone;
}; // declaring the datatype alone then declaring the variables of the struct in the main.

// struct employee{
//     char name[30];
//     float salary;
//     unsigned long phone;
// }e,f,g;
// declaring the datatype and the variables at the same time.

// struct{
//     char name[30];
//     float salary;
//     unsigned long phone;
// }a,b,c;
// declaring anonymous struct type and variables of this type; after that we can't declare more variables of this struct

void main(){
    // initializing a struct
    // to initialize a struct with the values we must initialize them in order inside curly braces (similar to an array)
    struct employee a={"Mark",80000,78871469},b={"Ali",69000,81455618};
    
    // dot operator
    // we can access a value of the struct using the dot operator
    printf("The phone number of %s is %lu.\n",a.name,a.phone);
    // we can even assign or change the value using the dot operator.
    b.salary=90000;
    printf("%s earns %.0f$ each year.\n",b.name,b.salary);
}