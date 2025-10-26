#include<stdio.h>
#include<string.h>

void main(){
    char a[]="Hello how are u.",b[]="My name is Mark.";
    strcat(strcat(a,"\n"),b); // strcat concatenates 2 strings into the first
    // printf(a);

    // Practical example: get the firt,middle and last name from a user and concatenate them
    int s=20;
    char first[s],middle[s],last[s];
    printf("Enter your first name: ");
    scanf("%s",first);
    printf("Enter your middle name: ");
    scanf("%s",middle);
    printf("Enter your last name: ");
    scanf("%s",last);
    // Add a space at the end of first and middle.
    first[strlen(first)]=' ';
    middle[strlen(middle)]=' ';
    // set an array of characters name to first;
    char name[s*3];
    strcpy(name,first); // Using strcpy to copy first to name
    // Alternatively
    /*for(int i=0;i<strlen(first);i++){
        *(name+i)=*(first+i);
    }*/
    // now concatenate to name
    strcat(strcat(name,middle),last);
    printf("Your first name is: %s.\nYour middle name is: %s.\nYour last name is: %s\n.",first,middle,last);
    printf("Your full name is: %s.\n",name);


}