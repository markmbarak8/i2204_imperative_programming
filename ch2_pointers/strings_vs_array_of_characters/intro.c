#include<stdio.h>

void main(){
    // to declare a string as an array of charcters you can do one of the following
    char s[100]; // an empty string of a certain size to be filled by scanf,fgets or strcpy
    char s_[9]={'M','a','r','k','\0'}; // an array of characters with each element corresponding to a character
    char _s[]="Mark"; // a string with all the characters inside double quotations
    // for the above methods the characters of the string can be changed just like an array
    // but just like the array the initial pointer cannot be altered and it will always point to the first character of the string

    // Another way of declaring a string is by using a dynamic pointer
    char *ps="Mark";    // With this method the pointer can be changed to loop over the characters but the characters themselves cannot be changed

    // Long strings
    static const char *str="Hi my name is mark moubarak i live in lebanon"
    "I'm studying computer science, I want to become a freelancer"
    "I want to make a lot of money and retire.";
    printf("%s\n",str);
}