#include<stdio.h>


char first_non_repeating(char s[]){
    for(char* p=s;*p!='\0';p++){
        int count=0;
        for(char* q=s;*q!='\0';q++){
            if(*q==*p){
                count++;
            }
        }
        if(count==1)return *p;
    }
    return 'S';
}


void main(){
    char s1[]="geeksforgeeks";
    char s2[]="popico";
    char s3[]="aabbbccc";
    printf("%c\n",first_non_repeating(s1));
    printf("%c\n",first_non_repeating(s2));
    printf("%c\n",first_non_repeating(s3));
}