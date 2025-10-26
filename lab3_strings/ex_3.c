#include<stdio.h>


void my_strcat(char dest[],char src[]){
    char *p;
    for(p=dest;*p!='\0';p++);
    for(char *q=src;*q!='\0';q++){
        *p=*q;
        p++;
    }
}

void main(){
    char name[30]="Mark",last_name[]=" Mbarak";
    my_strcat(name,last_name);
    printf(name);
}