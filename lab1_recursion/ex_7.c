#include<stdio.h>

void copyarrayhelper(int arr1[],int arr2[],int s,int i){
    if(i==s)return;
    arr2[i]=arr1[i];
    copyarrayhelper(arr1,arr2,s,i+1);
}

void copyarray(int arr1[],int arr2[],int s){
    copyarrayhelper(arr1,arr2,s,0);
}

void main(){
    int arr1[]={1,2,3};
    int arr2[3];
    int s=sizeof(arr2)/sizeof(int);
    copyarray(arr1,arr2,s);
    for(int i=0;i<s;i++){
        printf("%d ",arr2[i]);
    }
}