#include<stdio.h>

int countdigitshelper(char s[],int i,int count){
    if(s[i]=='\0')return count;
    if(s[i]>='0' && s[i]<='9')return countdigitshelper(s,i+1,count+1);
    return countdigitshelper(s,i+1,count);
}


int countdigits(char s[]){
    return countdigitshelper(s,0,0);
}

void main(){
    char s[]="123mmm32";
    printf("The number of the digits in %s is %d.\n",s,countdigits(s));
}