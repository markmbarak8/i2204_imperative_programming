#include<stdio.h>



int my_strlen(char s[]){
    int count=0;
    for(char *p=s;*p!='\0';p++){
        count++;
    }
    return count;
}

void main(){
    char s[]="Example";
    printf("%d",my_strlen(s));
}