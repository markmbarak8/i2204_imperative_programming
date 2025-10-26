#include<stdio.h>

void read10Nums(int [],int);
float avg(int [],int);
void display(float);

void main(){
    int T[10];
    read10Nums(T,10);
    float average=avg(T,10);
    display(average);
}

void read10Nums(int arr[],int s){
    for(int i=0;i<s;i++){
        printf("Enter integer %i: ",i+1);
        scanf("%i",&arr[i]);
    }
}

float avg(int arr[],int s){
    int sum=0;
    for(int i=0;i<s;i++){
        sum+=arr[i];
    }
    float avg_=(float)sum/s;
    return avg_;
}

void display(float avrg){
    printf("The average is %.2f",avrg);
}