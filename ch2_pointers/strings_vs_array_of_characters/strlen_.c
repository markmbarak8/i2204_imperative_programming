#include<stdio.h>

int len_helper(char S[],int n){
    if(*(S+n)=='\0') return n;
    // if(S[n]=='\0') return n;
    return len_helper(S,n+1);
}

int strlen_(char S[]){
    return len_helper(S,0);
}


void main(){
    char name[]="mark",name2[]="alvin";
    printf("%i %i",strlen_(name),strlen_(name2 ));
}