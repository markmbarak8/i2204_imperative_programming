#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int len(char *s){
    int i=0;
    for(;s[i]!='\0';i++);
    return i;
}

void Reverse(char *s){
    int l=len(s);
    for(int i=0;i<(l/2);i++){
        char temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
    }
}

bool palindrome (char *mot){
    int l=len(mot);
    char s[l];
    strcpy(s,mot);
    Reverse(s);
    return strcmp(s,mot)==0;
}

void main(){
    char s1[]="Marko";
    printf("%i\n",palindrome(s1));
    char s2[]="mom";
    printf("%i\n",palindrome(s2));
    char s3[]="dad";
    printf("%i\n",palindrome(s3));
    char s4[]="hal";
    printf("%i\n",palindrome(s4));
    char s5[]="noon";
    printf("%i\n",palindrome(s5));
    char s6[]="Mark";
    printf("%i\n",palindrome(s6));
    
}