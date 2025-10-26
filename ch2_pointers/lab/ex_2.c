#include<stdio.h>

void main(){
    const int SIZE=10;
    float numbers[SIZE];
    numbers[0]=0.0;
    for(int i=1;i<SIZE;i++)numbers[i]=numbers[i-1]+1.1;
    float *nPtr;
    for(float *p=numbers;p<numbers+SIZE;p++){
        printf("%.1f\n",*p);
    }
    nPtr=numbers;
    nPtr+=3;
    printf("%.1f\n",*nPtr);
    //Assuming that nPtr points to the beginning of array numbers, The address referenced by nPtr+8 is &numbers[8] and the value stored there is 8.8
    //Assuming that nPtr points to numbers[5], The address referenced by nPtr–4 is &numbers[1] and the value stored there is 1.1
}