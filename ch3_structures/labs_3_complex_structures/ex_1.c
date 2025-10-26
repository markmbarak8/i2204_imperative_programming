#include<stdio.h>
#include<string.h>

struct Person{
    char Firstname[20];
    char Lastname[20];
    int age;
    char job[20];
    struct Person *father;
};

void main(){
    struct Person Jules;
    struct Person PJules={"Patrice","Durand",80,"Painting",NULL};
    strcpy(Jules.Firstname,"Jules");
    strcpy(Jules.Lastname,"Durand");
    Jules.age=27;
    strcpy(Jules.job,"Engineering");
    Jules.father=&PJules;
    printf("My name is %s %s.\nI'm %i years old and I'm into %s.\nMy father'n name is %s %s\nHe's %i years old and he's into %s.\n",Jules.Firstname,Jules.Lastname,Jules.age,Jules.job,
        Jules.father->Firstname,Jules.father->Lastname,Jules.father->age,Jules.father->job);
}