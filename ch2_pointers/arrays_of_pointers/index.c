#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    srand(time(NULL));
    int m[4][5];
    // we can fill this array using a regular nested loop
    int max=40,min=2;
    /*for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            m[i][j]=(rand()%(max-min-1))+min;
        }
    }*/
    // another way using pointers
    for(int *p=*m;p<*m+20;p++){
        *p=(rand()%(max-min-1))+min;
    }
    // printing a 2-d array:
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("%i ",m[i][j]);
        }
        printf("\n");
    }
    // for(int i=0;i<4;i++){
    //     printf("%p\n",(m+i));
    //     for(int j=0;j<5;j++){
    //         printf("%p ",*(m+i)+j);
    //     }
    //     printf("\n");
    // }
    // dereferencing a 2-d array will give the value of the first element of the first array
    // we can increment the pointer of a 2-d array of dimension m by n up to m*n to iterate over all the elements of the array
    
}