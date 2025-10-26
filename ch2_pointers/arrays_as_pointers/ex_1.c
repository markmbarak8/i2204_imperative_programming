#include<stdio.h>
#define size 10

float sum(float *arr,int s){
    float sum=0;
    for(float *p=arr;p<arr+s;p++){
        sum+=*p;
    }
    return sum;
}

void main(){
    float H[size]={2.1,-5.4,9.5,6.3,7.8,4.1,-6.5,-3.2,9.5,1.7};
    float s=sum(H,size);
    printf("%.2f\n",s);
}