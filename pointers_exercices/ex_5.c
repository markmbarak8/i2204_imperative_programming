#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100


void transpose_mat(int mat[][MAX_SIZE],int mat2[][MAX_SIZE],int m,int n){
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mat2[j][i]=mat[i][j];
        }
    }
    
};

void main(){
    int mat[][MAX_SIZE]={{1,2,3,6},
                         {1,2,2,3},
                         {2,5,2,9}};
    int mat2[MAX_SIZE][MAX_SIZE];
    transpose_mat(mat,mat2,3,4);
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("%i ",mat2[i][j]);
        }
        printf("\n");
    }
    
}