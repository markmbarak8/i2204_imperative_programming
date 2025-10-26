#include<stdio.h>
#include<stdbool.h>

int countrows(int mat[][100],int dim,int i){
    int count=0;
    for(int j=0;j<dim;j++){
        count+=(mat[i][j]==1);
    }
    return count;
}

bool Samerowcount(int mat[][100],int dim){
    int i=0;
    int count=countrows(mat,dim,i);
    for(i=1;i<dim;i++){
        if(countrows(mat,dim,i)!=count){
            return false;
        }
    }
    return true;
}

int countcols(int mat[][100],int dim,int i){
    int count=0;
    for(int j=0;j<dim;j++){
        count+=(mat[j][i]==1);
    }
    return count;
}

bool Samecolcount(int mat[][100],int dim){
    int count_first_col=countcols(mat,dim,0);
    for(int i=1;i<dim;i++){
        if(countcols(mat,dim,i)!=count_first_col){
            return false;
        }
    }
    return true;
}

bool Samecount(int mat[][100],int dim){
    return Samecolcount(mat,dim)&&Samerowcount(mat,dim);
}


void main(){
    int a[][100]={{1,0,1},{1,1,0},{0,1,1}};
    int b[][100]={{1,0,0},{1,0,0},{0,0,1}};
    printf("%d\n",Samecount(a,3));
    printf("%d\n",Samecount(b,3));
}