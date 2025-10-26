#include<stdio.h>

typedef struct{
    char name[30];
    float salary;
    unsigned long phone;
}employee;

void printsalaryraise(employee e,int percent){ // here the first argument e must be strictly of struct type employee
    e.salary+=e.salary*percent/100;
    printf("%.1f\n",e.salary);
}

void main(){
    employee e={"Mark",100000,78871469};
    printsalaryraise(e,10);
    printf("%.1f\n",e.salary); // the salary value of e was not updated in the main function but only in the printsalary raise function where it was passed as an argument
}