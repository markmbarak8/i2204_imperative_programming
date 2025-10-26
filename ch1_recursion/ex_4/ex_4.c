#include<stdio.h>

int readNum(){
    int n;
    printf("Enter an integer: ");
    scanf("%i",&n);
    return n;
}

int doubleIt(int n){
    int n2=n*2;
    return n2;
}

void display(int n1,int n2){
    printf("The sum of n1 and n2 is: %i",n1+n2);
}

void main(){
    int num1=readNum();
    int dnum1=doubleIt(num1);
    int num2=readNum();
    int dnum2=doubleIt(num2);
    display(dnum1,dnum2);
}