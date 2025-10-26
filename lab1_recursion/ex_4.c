#include<stdio.h>

void Reversestringhelper(char s[],int l,int i){
    if(i==l/2)return;
    char temp=s[i];
    s[i]=s[l-1-i];
    s[l-1-i]=temp;
    Reversestringhelper(s,l,i+1);
}

void Reversestring(char s[],int l){
    Reversestringhelper(s,l,0);
}

void main(){
    char name[]="Mark Mbarak7";
    int l=sizeof(name)-1;
    Reversestring(name,l);
    printf(name);
}