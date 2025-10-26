#include<stdio.h>
#include<stdlib.h>

void main(){
    // calloc() = Contiguous allocation
    //            Allocates memory dynamically and sets all allocated bytes to 0.
    //            malloc() is faster, but calloc() leads to less bugs
    //            calloc(#,size)
    int number=0;
    printf("Enter the number of players: ");
    scanf("%d",&number);
    int *scores=calloc(number,sizeof(int));
    if(scores==NULL){
        printf("Memory allocation failed!!\n");
        return;
    }
    for(int i=0;i<number;i++){
        // printf("%d ",scores[i]); // here we will get all 0's because w didn't set our scores yet
        // // while with malloc we will get garbage value
        printf("Enter the score #%i: ",i+1);
        scanf("%i",scores+i);
    }
    for(int j=0;j<number;j++){
        printf("%d ",*(scores+j));
    }
    free(scores);
    scores=NULL;
}