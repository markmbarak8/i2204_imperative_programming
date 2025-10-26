#include<stdio.h>

void quicksort(int [],int,int);
int partition(int [],int,int);

void main(){
    int arr[]={56,81,32,74,98,39,56,19,73,157,14,47};
    int s=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,s-1);
    for(int i=0;i<s;i++){
        printf("%i ",arr[i]);
    }
}

int partition(int arr[],int start,int end){
    int val=arr[end];
    int i=start-1,j=start;
    for(j;j<=end;j++){
        if(arr[j]<=val){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    return i;
}

void quicksort(int arr[],int start,int end){
    if(end<=start) return;
    int pivot=partition(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
}
