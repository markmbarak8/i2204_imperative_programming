#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

float **MatMul(float mat1[][MAX_SIZE],float mat2[][MAX_SIZE],int m,int n,int p){
    float **result=(float **)malloc(m*p*sizeof(float));
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            float val=0;
            for(int k=0;k<n;k++){
                val+=mat1[i][k]*mat2[k][j];
            }
            result[i][j]=val;
        }
    }
    return result;
}

void fillmatrix(float mat[][MAX_SIZE],int m,int n,char f[]){
    printf("Fill out the %s matrix:\n",f);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the (%i,%i) entry of the %s matrix: ",i+1,j+1,f);
            scanf("%f",(*(mat+i)+j));
        }
    }
}

void main(){
    int m,n,p;
    printf("Enter the number of rows of the first matrix: ");
    scanf("%d",&m);
    printf("Enter the number of columns of the first matrix(it will be the same as the number of rows of the second matrix): ");
    scanf("%d",&n);
    printf("Enter the number of columns of the second matrix: ");
    scanf("%d",&p);
    float mat1[m][MAX_SIZE],mat2[n][MAX_SIZE];
    fillmatrix(mat1,m,n,"First");
    fillmatrix(mat2,n,p,"Second");
    float **mult=MatMul(mat1,mat2,m,n,p);
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%.2f ",*(*(mult+i)+j));
        }
        printf("\n");
    }
    free(mult);
}