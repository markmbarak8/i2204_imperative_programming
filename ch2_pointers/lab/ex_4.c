#include<stdio.h>
#include<stdlib.h>

int* concat_tab(int n1,int t1[],int n2,int t2[]){
    int *newArr;
    while((newArr=(int *)calloc(n1+n2,sizeof(int)))==NULL);
    for(int i=0;i<n1;i++){
        *(newArr+i)=*(t1+i);
    }
    for(int j=n1;j<n1+n2;j++){
        *(newArr+j)=*(t2+j-n1);
    }
    return newArr;
}

void fill(int t[],int n){
    printf("Fill the array:\n");
    for(int i=0;i<n;i++){
        printf("Enter the element #%i: ",i);
        scanf("%d",t+i);
    }
}


void main(){
    int n1;
    printf("Enter the size of the first array: ");
    scanf("%i",&n1);
    int t1[n1];
    fill(t1,n1);

    int n2;
    printf("Enter the size of the second array: ");
    scanf("%i",&n2);
    int t2[n2];
    fill(t2,n2);

    int *concat_arr=concat_tab(n1,t1,n2,t2);
    for(int j=0;j<n1+n2;j++){
        printf("%i ",*(concat_arr+j));
    }
    free(concat_arr);
    concat_arr=NULL;
}