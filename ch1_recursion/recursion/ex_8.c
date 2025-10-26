#include<stdio.h>

int binary_helper(int arr[],int start,int end,int n){
    if(start>end)return -1;
    int middle=(start+end)/2;
    if(arr[middle]==n)return middle;
    else if(arr[middle]>n){
        binary_helper(arr,start,middle-1,n);
    }
    else{
        binary_helper(arr,middle+1,end,n);
    }
}


int binarysearch(int arr[],int s,int n){
    return binary_helper(arr,0,s-1,n);
}

void main(){
    int arr[]={1,3,6,8,11,17,21,32,45,78,91,147,258,665};
    int s=sizeof(arr)/sizeof(arr[0]);
    int n=147;
    printf("%i is located at index %i.",n,binarysearch(arr,s,n));
}