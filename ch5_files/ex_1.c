#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Store(char *filename){
    FILE *p;
    while((p=fopen(filename,"a"))==NULL);
    
    while(1){
        char name[50];
        printf("Enter a student name(-1 to terminate): ");
        fgets(name,sizeof(name),stdin);
        name[strlen(name)-1]='\0';
        if(strcmp(name,"-1")==0)break;
        strcat(name,"\t");
        if(fprintf(p,"%s",name)==-1){
            perror("Error writing to file");
    }
    if(fclose(p)==EOF){
            perror("Error closing file");
    }
}
}

void Load(char* filename){
    FILE *p;
    while((p=fopen(filename,"rb"))==NULL);
    char names[50];
    while(fgets(names, sizeof(names), p) != NULL){
        printf("%s", names);
    }
    if(fclose(p)==EOF){
            perror("Error closing file");
    }
}

int main(void){
    Store("Students");
    Load("Students");
    return 0;
}