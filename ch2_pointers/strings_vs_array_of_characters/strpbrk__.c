#include<stdio.h>
#include<stdbool.h>

bool instr_helper(char s[],int l,char c,int i){
    if(i==l) return 0;
    if(c==s[i]) return 1;
    return instr_helper(s,l,c,i+1);
}

bool instr(char s[],int l,char c){
    return instr_helper(s,l,c,0);
}

// simulating strpbrk() without string.h
char* strpbrk_(char s1[],char s2[]){
    int l1=0,l2=0;
    while(s1[l1]!='\0'){
        l1++;
    }
    while(s2[l2]!='\0'){
        l2++;
    }
    for(char *p=s1;p<s1+l1;p++){
        // using recursion
        if(instr(s2,l2,*p))return p;
    }
    return NULL;
}

void main(){
    char a1[]="This is Mark Moubarak",a2[]="Well";
    // for(char *p=a1;p<a1+21;p++){
    //     printf("%p\n",p);
    // }
    // printf("\n");
    printf("%p",strpbrk_(a1,a2));

}