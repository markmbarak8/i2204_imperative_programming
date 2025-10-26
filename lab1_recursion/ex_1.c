#include<stdio.h>

int findelementhelper(int arr[],int size,int element,int i){
    if(i==size)return -1;
    if(arr[i]==element)return i;
    return findelementhelper(arr,size,element,i+1);
}

int findelement(int arr[],int size,int element){
    return findelementhelper(arr,size,element,0);
}

void main(){
    int arr[]={1,5,8,9,3,5,7};
    int s=sizeof(arr)/sizeof(int);
    int element=9;
    printf("%d is at index %d.",element,findelement(arr,s,element));
}