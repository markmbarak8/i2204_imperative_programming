#include<stdio.h>
#include<stdlib.h>

int strlen_(char *s){
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}

char* reverseorder(char s[]){
    char* rev=(char*)malloc(100*sizeof(char));
    int revl=0;
    int l=strlen_(s)-1;
    
    for(char *p=s+l;p>=s;p--){
        if(*p=='.' && *(p+1)!='.' && *(p+1)!='\0'){
            for(char* q=p+1;*q!='.'&&*q!='\0';q++){
                rev[revl]=*q;
                revl++;
            }
            rev[revl]='.';
            revl++;
        }
    }
    if(s[0]!='.'){
        for(char* r=s;*r!='.';r++){
            rev[revl]=*r;
            revl++;
        }
        revl++;
    }
    rev[revl-1]='\0';
    return rev;
}


void main(){
    char s1[]="...hi...";
    char s2[]=".Mark..Moubarak..";
    char s3[]="Mhmd.hariri";
    char s4[]="Ali.Kaouk..";
    printf("%s\n",reverseorder(s1));
    printf("%s\n",reverseorder(s2));
    printf("%s\n",reverseorder(s3));
    printf("%s\n",reverseorder(s4));
}