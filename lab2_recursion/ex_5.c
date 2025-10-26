#include<stdio.h>

double power(double base,int expo){
    if(expo==0)return 1;
    if(expo>0)return base*power(base,expo-1);
    else{
        return (1/base)*power(base,expo+1);
    }
}

void main(){
  printf("%.15lf",power(8,-9));
}