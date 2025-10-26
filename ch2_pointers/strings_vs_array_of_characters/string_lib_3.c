#include<stdio.h>
#include<string.h>

void main(){
    // char name[]="MarkM";
    // for(char *p=name;p<name+5;p++){
    //     printf("%p\n",p);
    // }
    // char *i=strchr(name,'M');
    // printf("\n");
    // printf("%p\n",i);
    // printf("%i",i==NULL);

    // strchr returns the pointer of the first occurence of a character in a string; returns a null pointer if the character doesn't exist in the string
    // ex: For an array of names use a for loop to count the names with the letter m,the names with the letter m at the begining, and the names that don't have the letter m.
    char names[][20]={"mark","michael","lara","amber","mickey","sam","john","david","allen","joma","ryan","daniel","reem","emma"};
    int n=sizeof(names)/sizeof(names[0]); // number of names
    int no_m=0,with_m=0,first_m=0;
    for(int i=0;i<n;i++){
        char *name=strchr(names[i],'m');
        if(name){
            with_m++;
            if(name==names[i])first_m++;
            continue;
        }
        no_m++;
    }
    // printf("The number of names that have an m is: %i.\n",with_m);
    // printf("The number of names that don't have an m is: %i.\n",no_m);
    // printf("The number of names that start with an m is: %i.\n",first_m);
    
    strstr("My name is Mark moubarak","Mark"); // strstr returns the pointer of the first character of the first occurence of the substring in the first string; if it is not present it returns null;

    // Summary of the string.h functions:
    // strcpy(s1,s2) : copies s2 into s1
    // strncpy(s1,s2,n) : copies s2 into s1 up to n characters of s2
    // strcmp(s1,s2) : compares to see if they are the same or if one is greater than the other in the alphabet
    // strncmp(s1,s2,n) : same but up to n characters
    // strcat(s1,s2) : concatenates s1 and s2 and stores it in s1
    // strncat(s1,s2,n) : same but concatenates up to n characters of s2
    // strlen(s1) : gets the number of characters in s1
    // strchr(s1,ch) : returns the pointer of the first occurrence of ch in s1
    // strrchr(s1,ch) : returns the pointer of the last occurrence of ch in s1
    // strpbrk(s1,s2) : returns the pointer of the first element in s1 that occures in s2
    // strstr(s1,s2) : returns the pointer of the first character of the first occurence of the substring in the first string; if it is not present it returns null;
}