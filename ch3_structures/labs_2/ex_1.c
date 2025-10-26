#include<stdio.h>

typedef struct{
    char Firstname[20];
    char Lastname[20];
    int age;
    char job[20];
}Person;

void main(){
    Person Jules;
    printf("Enter your first name: ");
    scanf("%s",Jules.Firstname);
    printf("Enter your last name: ");
    scanf("%s",Jules.Lastname);
    printf("Enter your age: ");
    scanf("%i",&Jules.age);
    printf("Enter your job: ");
    scanf("%s",Jules.job);
    printf("Your name is %s %s\nYou're %i years old and your job is %s.\n",
    Jules.Firstname,Jules.Lastname,Jules.age,Jules.job);
}