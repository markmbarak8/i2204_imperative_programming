#include<stdio.h>

int readNum();
int doubleIt(int n);
void display();

void main(){
    display(readNum());
}

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

void display(int n){
    int n2=doubleIt(n);
    printf("The double of %i is %i",n,n2);
}