#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool Palindromehelper(int nb,int length){
    if(nb%10 != (int)(nb/pow(10,length)))return 0;
    if(length==0 || length==1)return 1;
    return Palindromehelper((nb%(int)pow(10,length-1))/10,length-2);
}

int len(int nb){
    if(nb==0) return 0;
    return 1+len(nb/10);
}

bool isPalindrome(int nb){
    int l=len(nb);
    return Palindromehelper(nb,l);
}

void main(){
    printf("%d\n",isPalindrome(343));
    printf("%d\n",isPalindrome(345267));
    printf("%d\n",isPalindrome(367763));
    printf("%d",(234%100)/10);
}