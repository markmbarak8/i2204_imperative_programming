#include<stdio.h>
#include<stdbool.h>

bool isLowerTriangular(float mat[][100],int dim){
   
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            if(i<j && *(*(mat+i)+j)!=0){
                return false;
            }
        }
    }
    return true;
}

bool isDiagonal(float mat[][100],int dim){
    for(int i=0;i<dim;i++){
        if(*(*(mat+i)+i)!=0){
            return false;
        }
    }
    return true;
}

bool isIdentity(int mat[][100],int dim){
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            float c=*(*(mat+i)+j);
            if((i!=j && c!=0) || (i==j && c!=1)){
                return false;
            }
            
        }
    }
    return true;
}

void main(){
    int m1[][100]={{1,0,0},
                   {0,1,0},
                   {0,0,1}};
    int m2[][100]={{1,0,0},
                   {0,1,0},
                   {0,0,0}};
    int m3[][100]={{1,0,0,0},
                   {0,1,0,0},
                   {0,0,1,0},
                   {0,0,0,1}};
    printf("%d\n",isIdentity(m1,3));
    printf("%d\n",isIdentity(m2,3));
    printf("%d\n",isIdentity(m3,4));
}