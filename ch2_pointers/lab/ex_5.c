#include<stdio.h>
#include<stdlib.h>

int len(char *s){
    int i=0;
    while(*(s+i)!='\0')i++;
    return i;
}

char* concat_string(char* s1, char* s2){
    char *s;
    int l1=len(s1),l2=len(s2);
    while((s=calloc(l1+l2,sizeof(char)))==NULL);
    for(int i=0;i<l1;i++) *(s+i)=*(s1+i);
    for(int j=l1;j<l1+l2;j++) *(s+j)=*(s2-l1+j);
    return s;
}

void main(){
    char *s1,*s2;

    printf("Enter the first word: ");
    fgets(s1,20,stdin);
    s1[len(s1)-1]='\0';

    printf("Enter the second word: ");
    fgets(s2,20,stdin);
    s2[len(s2)-1]='\0';

    char *s=concat_string(s1,s2);
    printf("%s\n",s);
}