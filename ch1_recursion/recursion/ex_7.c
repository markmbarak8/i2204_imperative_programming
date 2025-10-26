#include<stdio.h>

void printarr(int T[],int s){
    if(s==0)return;
    printarr(T,s-1);
    printf("%i\n",T[s-1]);
    
}

void main(){
    int arr[]={3,7,9,1,6,10,15};
    int s=sizeof(arr)/sizeof(arr[0]);
    printarr(arr,s);
}