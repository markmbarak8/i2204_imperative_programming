#include<stdio.h>

void main(){
    FILE *pFile=fopen("test.txt","r");
    if(pFile==NULL){
        printf("Could not read file.\n");
        return;
    }
    char buffer[100];
    while(fgets(buffer,sizeof(buffer),pFile)!=NULL) printf("%s",buffer); // fgets stops at a newline which is why we are putting it in a loop
    fclose(pFile);
}