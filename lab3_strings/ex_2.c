#include<stdio.h>


void my_strcpy(char dest[],int size_dest,char src[]){
    for(int i=0;i<size_dest || src[i]!='\0';i++){
        dest[i]=src[i];
    }
}

void main(){
    char dest[30],src[]="Mark";
    my_strcpy(dest,sizeof(src),src);
    printf("%s",dest);
}