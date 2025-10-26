#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char name[30];
    float marks[6];
}student;

student* allocfill(int n){
    student *st=(student *)calloc(n,sizeof(student));
    for(int i=0;i<n;i++){
        printf("Enter student #%i data.\n",i+1);
        printf("Name : ");
        fgets((st+i)->name,sizeof((st+i)->name),stdin);
        (st+i)->name[strlen((st+i)->name)-1]='\0';
        for(int j=0;j<6;j++){
            printf("Mark #%i: ",j+1);
            scanf("%f",((st+i)->marks)+j);
            getchar();
        }
        printf("\n");
    }
    return st;
}

float average(student *st,int n){
    float avg=0;
    for(int i=0;i<n;i++){
        float st_avg=0;
        for(int j=0;j<6;j++){
            st_avg+=*(((st+i)->marks)+i);
        }
        avg+=st_avg/6;
    }
    avg/=n;
    return avg;
}

void main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%i",&n);
    getchar();
    student* st=allocfill(n);
    float avg=average(st,n);
    printf("The class average is %.2f.\n",avg);
    free(st);
    st=NULL;
}