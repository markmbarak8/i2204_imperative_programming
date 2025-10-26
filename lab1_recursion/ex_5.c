#include<stdio.h>
#include<math.h>

int converttobinarthelper(int d,int bin,int i){
    if(d==0)return bin;
    if(d%2==0)return converttobinarthelper(d/2,bin,i+1);
    else return converttobinarthelper(d/2,bin+pow(10,i),i+1);
}

int converttobinary(int d){
    return converttobinarthelper(d,0,0);
}

void main(){
    int d=12;
    printf("%d in binary is %d.\n",d,converttobinary(d));
}