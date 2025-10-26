#include<stdio.h>
#include<stdlib.h>

void main(){
    // malloc() = A function in C that dynamically allocates
    //            a specified number of bytes in memory
    char *a=malloc(4*sizeof(char)); // malloc returns a void pointer to an address in the heap
    if(a==NULL){ // sometimes malloc might return a null pointer
        printf("Memory allocation failed!!\n");
        return;
    }
    char name[]="Mark";
    for(int i=0;i<4;i++){
        *(a+i)=name[i];
        printf("%c",*(a+i));
    }
    free(a); // returning rented space back to the os;
    a=NULL; // avoids dangling pointers
}