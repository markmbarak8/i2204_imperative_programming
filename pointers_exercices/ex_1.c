#include<stdio.h>
#include<stdbool.h>

bool isUpperTriangular(float mat[][100],int dim){
   
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            if(i>j && *(*(mat+i)+j)!=0){
                return false;
            }
        }
    }
    return true;
}

void main(){
    float mat1[][100]={{0.45,0,1},
                       {0,13,1},
                       {0,0,0}};
    float mat2[][100]={{5.75,0,2},
                      {8.675,13,1},
                       {9.85,0,0}};
    float mat3[][100]={{0,0,0,0},{0,3,1,5},{0,0,7,7},{0,0,0,0}};
    // for(int* p=*mat3;p<*mat3+16;p++){
    //     printf("%d ",*p);
    // }
    printf("%d\n",isUpperTriangular(mat1,3));
    printf("%d\n",isUpperTriangular(mat2,3));
    printf("%d\n",isUpperTriangular(mat3,4));
    
}