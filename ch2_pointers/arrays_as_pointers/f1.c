#include<stdio.h>


void main(){
    // when we declare an array of a type, it is in fact a pointer of that type
    // when used by itself, it points to the first element of the array
    int arr[]={5,7,9};
    printf("%p\n\n",arr); // this will return the address of element at index 0
    for(int i=0;i<3;i++){
        // printf("%p\n",&arr[i]);
        printf("%p\n",arr+i);

    }
    printf("\n");
    int *p=arr;
    for(int i=0;i<3;i++){
        // printf("%d\n",p[i]);
        printf("%d\n",*(p+i));
    }
    // the difference between a normal pointer and an array pointer is
    // that an array pointer cannot be changed and it always points to the first element of the array
    // int o=9;
    // arr=&o; WROONG!!!!!
    // arr++ ALSO WROONG!!!!!
}