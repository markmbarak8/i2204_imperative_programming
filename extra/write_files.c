#include<stdio.h>


void main(){
    // FILE is a build-in struct inside stdio.h
    FILE *pFile=fopen("example.txt","a"); // w for write mode (overwrites what was written)
                                          // a for append mode (adds the new text to the end of the file)

    if(pFile==NULL){
        printf("Error opening the file.\n");
        return;
    }
    const static char *par="This is a small paragraph that I am writing for my test file.\n"
    "Hello my name is Mark and I just learned how to write files.\n"
    "Thank you for reading.\n";

    char par2[]="Booty Booty Booty\nRockin everywere.\n";

    fprintf(pFile,"%s",par2);
    printf("File was successfully written!!.\n");
    fclose(pFile); // for closing a file
}