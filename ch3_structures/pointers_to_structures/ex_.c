#include<stdio.h>

typedef struct{
    char name[30];
    float salary;
    unsigned long phone;
}employee;

void printsalaryraise(employee *pe,int percent){ // here the first argument e must be a poiter to the struct type employee
    pe->salary+=pe->salary*percent/100; // here the salary value of the struct of address pe will be updated in main

}

void main(){
    employee e={"Mark",100000,78871469};
    printsalaryraise(&e,10);
    printf("%.1f\n",e.salary);
}