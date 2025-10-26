#include<stdio.h>

void removech(char s1[],char s2[]){
    for(char *p=s1;*p!='\0';p++){
        for(char *q=s2;*q!='\0';q++){
            while(*p==*q){
                char *r;
                for(r=p;*r!='\0';r++){
                    *r=*(r+1);
                }
                
            }
        }
    }
}


void main(){
    char s1[]="tree";
    char s2[]="ro";
    removech(s1,s2);
    printf(s1);
}