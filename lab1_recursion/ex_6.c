#include<stdio.h>
#include<stdbool.h>

bool isPalindromehelper(char s[],int l,int i){
    if(s[i]!=s[l-1-i])return false;
    if(i==l/2)return true;
    return isPalindromehelper(s,l,i+1);

}

bool isPalindrome(char s[],int l){
    return isPalindromehelper(s,l,0);
}

void printstatus(char s[],int l){
    if(isPalindrome(s,l)){
        printf("%s is Palindrome!!\n",s);
    }
    else{
        printf("%s is not Palindrome.\n",s);
    }
}

void main(){
    char s1[]="noon",s2[]="moon",s3[]="pop";
    int l1=sizeof(s1)-1,l2=sizeof(s2)-1,l3=sizeof(s3)-1;
    printstatus(s1,l1);
    printstatus(s2,l2);
    printstatus(s3,l3);
}