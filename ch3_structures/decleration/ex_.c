#include<stdio.h>

struct student{
    char name[30];
    int id;
    float m1102;
    float m1103;
    float m1104;
    float m1105;
    float m1106;
    float i1101;
};

void main(){
    struct student a={"Mark",109423,68,82,62,58,63,77};
    float avg=(a.m1102*3+a.m1103*6+a.m1104*6+a.m1105*6+a.m1106*3+a.i1101*6)/30;
    printf("%s's average is: %.2f.\n",a.name,avg);
}