#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

//How to declare an array of structs?
// - define a struct
// - declare an array variable of that type

typedef struct{
    char name[30];
    float salary;
    unsigned long phone;
}employee;

void main(){
    srand(time(NULL));
    char* names[]={"Mark","Ali","Jawad","Hasan","Zack","Khalil","Fatima","Rayan","Mehsen","Jamal","Tia"};
    int s=sizeof(names)/sizeof(names[0]);
    int minsal=20000,maxsal=200000;
    long minph=78000000,maxph=78999999;
    employee emp[100];
    for(int i=0;i<100;i++){
        strcpy(emp[i].name,names[rand()%s]);
        emp[i].salary=rand()%(maxsal-minsal+1)+minsal;
        emp[i].phone=rand()%(maxph-minph+1)+minph;
    }
    for(int j=0;j<100;j++){
        printf("%s's salary: %9.0f.\n",emp[j].name,emp[j].salary);
    }
}