#include<stdio.h>
#include<string.h>

int cmp_helper(char s1[],char s2[],int l,int i){
    if(i==l)return 0;
    if((int)s1[i]<(int)s2[i])return -1;
    if((int)s1[i]>(int)s2[i])return 1;
    return cmp_helper(s1,s2,l,i+1);

}

int strcmp_(char s1[],char s2[]){
    int l1=0,l2=0;
    while(s1[l1]!='\0') l1++;
    while(s2[l2]!='\0') l2++;
    if(l1>l2){
        int c=cmp_helper(s1,s2,l2,0);
        if(c==0)return 1;
        return c;
    }
    else if(l2>l1){
        int c=cmp_helper(s1,s2,l1,0);
        if(c==0)return -1;
        return c;
    }
    else{
        int c=cmp_helper(s1,s2,l2,0);
        return c;
    }
}

void main(){
    // A->Z (65->90)
    // a->z (97->122)
    printf("%i ",strcmp_("Mark","Mark")); //0
    printf("%i ",strcmp_("Mark","mark")); //-1
    printf("%i ",strcmp_("Markus","Mark")); //1
    printf("%i ",strcmp_("Mark","Adamm")); //1

    printf("\n");

    printf("%i ",strcmp("Mark","Mark")); //0
    printf("%i ",strcmp("Mark","mark")); //-1
    printf("%i ",strcmp("Markus","Mark")); //1
    printf("%i ",strcmp("Mark","Adamm")); //1
}