#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define size 50

void main(){
    char name[size];
    printf("Enter your full name: ");
    fgets(name,size,stdin);
    // strlen gets the length of the string in the array of characters
    // below we are removing the excess enter (newline) from the end of the string
    // and replacing it with a null character
    name[strlen(name)-1]='\0';
    printf("Welcome %s.\n",name);
    printf("Your name has %i characters.\n",strlen(name));

    // strcmp
    char s1[]="MBrkk",s2[]="Mark";
    int c=strcmp(s1,s2);
    int a= (c==0)? 0 // meaning that s1 and s2 have exactly the same characters
        : (c<0)?-1 // meaning that at the first difference the character of s1 is lower than s2 in dict
        :1; // meaning that at the first difference the character of s2 is lower than s1 in dict
    switch(a){
        case 0:
            printf("s1 and s2 are the same.\n");
            break;
        case 1:
            printf("s2<s1 in dictionary order.\n");
            break;
        case -1:
            printf("s1<s2 in dictionary order.\n");
            break;
    }
    // A more practical example of strcmp is with an array af strings to examine if a string exists in the array
    char class[][size]={"Mark Moubarak","Ali Kaouk","Hassan Annan","Khalil Mostafa","Zakaria Kaj","Jawad Dia","Ali Srour"};
    char student[size];
    printf("Enter the student: ");
    fgets(student,size,stdin);
    student[strlen(student)-1]='\0';
    // Using a loop I will iterate over the class array
    bool inclass=0;
    for(int i=0;i<7;i++){
        if(!strcmp(student,class[i])){
            inclass=1;
            break;
        }
    }
    if(inclass) printf("%s is in the class.\n",student);
    else printf("%s is not in the class.\n",student);
}