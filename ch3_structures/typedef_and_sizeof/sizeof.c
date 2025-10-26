#include<stdio.h>

typedef struct{
    char first[30];
    char last[20];
    int age;
}main_;

void main(){
    // sizeof is a unary operator that generates the storage size of an expression or datatype
    // measured in the nummber of char-sized units.
    printf("The size of char is %i.\n",sizeof(char));
    printf("The size of int is %i.\n",sizeof(int));
    printf("The size of float is %i.\n",sizeof(float));
    printf("%i\n",sizeof(1.2)); // a double
    // We've been using sizeof to get the size of an array by using sizeof(array) (to get the sum of the sizes of all the elements)
    // divided by the sizeof one element usually the element at index 0 or sizeof(array_type)
    int arr[]={23,67,12,98};
    int s=sizeof(arr)/sizeof(arr[0]);
    printf("The size of the array is %i.\n",s);

    // the sizeof the struct is generaly greater than or equal to the sum of the sizes of the datatypes of the values;
    printf("The size of main is %i.\n",sizeof(main_));
}