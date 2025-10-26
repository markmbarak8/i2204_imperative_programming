#include<stdio.h>

int min_helper(int arr[],int s,int min_,int i){
    if(i==s)return min_;
    if(arr[i]<min_)return min_helper(arr,s,arr[i],i+1);
    else return min_helper(arr,s,min_,i+1);
}

int min(int arr[],int s){
    return min_helper(arr,s,arr[0],0);
}

void main(){
    int arr[]={5,8,4,3,17,10};
    int s=sizeof(arr)/sizeof(arr[0]);
    printf("The minimum of the array is: %i.",min(arr,s));
}