#include<stdio.h>

void putstr(char s[]){
    // index s as an array
    for(int i=0;s[i];i++) putchar(s[i]);
}
void putstr2(char s[]){
    // access s as a pointer
    for(char *st=s;*st;st++)putchar(*st);
}

void main(){
    char str[]="Mark";
    // putstr(str);
    putstr2(str);
}