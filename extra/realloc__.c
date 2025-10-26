#include<stdio.h>
#include<stdlib.h>

void main(){
    // realloc() = Reallocation.
    //             Resize previously allocated memory
    //             realloc(ptr,bytes)
    int number=0;
    printf("Enter the numer of prices: ");
    scanf("%d",&number);

    float *prices=calloc(number,sizeof(float));

    if(prices==NULL){
        printf("Memory allocation failed!\n");
        return;
    }

    for(int j=0;j<number;j++){
        printf("Enter price #%d: ",j+1);
        scanf("%f",prices+j);
    }

    int newNum=0;
    printf("Enter a new number of prices: ");
    scanf("%d",&newNum);

    float *temp=realloc(prices,newNum*sizeof(float));

    if(temp==NULL){
        printf("Reallocation failed!!\n");
    }
    else{
        prices=temp;
        temp=NULL;
        for(int k=number;k<newNum;k++){
            printf("Enter price #%d: ",k+1);
            scanf("%f",prices+k);
        }
        for(int i=0;i<newNum;i++){
            printf("$%.2f ",prices[i]);
        }
    }

    

    free(prices);
    prices=NULL;
}