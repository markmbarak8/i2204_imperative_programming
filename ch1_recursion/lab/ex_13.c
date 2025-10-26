#include<stdio.h>

int occ_helper(int arr[],int s,int v,int count,int i){
    if(i==s)return count;
    if(arr[i]==v)return occ_helper(arr,s,v,count+1,i+1);
    else return occ_helper(arr,s,v,count,i+1);
}

int nb_occ(int arr[],int s,int v){
    return occ_helper(arr,s,v,0,0);
}

void main(){
    int arr[]={4,4,6,7,5,7,7,4,6,5,7};
    int s=sizeof(arr)/sizeof(arr[0]);
    printf("The number of occurences of %i in the above array is %i.",4,nb_occ(arr,s,4));
}