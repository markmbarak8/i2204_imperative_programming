#include<stdio.h>


void main(){
    // only two arthmetic: addition (+) and subtraction (-)
    /*int a=4;
    int *p=&a,*q=p-1;
    q++; // when we increment q it will be equal to p thus point to a
    printf("%d\n",*q);*/
    float arr[]={3.6,1.3,-8.5,4.9};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        float *p=&arr[i];
        printf("%.1f is located at %p.\n",arr[i],p);
        printf("The addess of the element before is %p.\n",p-1);
        printf("The address of the element after is %p.\n",p+1);
        // here each time we increment or decrement the address changes by a precision of 4
        // since we're working with floats (4 bits)
        printf("\n\n");
    }
    // In pointers we can add or subtract integers to or from pointers ex:
    int A[]={5,6,8,2,0,10,54,44,31,18,94,24,33};
    int *p=&A[2]; // pointer to the element at index 2
    // find the element at index 8 using this pointer
    printf("The element at index 8 is %i.\n",*(p+6));

    // we can subtract two pointers to find the number of elements of their base type that seperate the two
    int *a=&A[1],*b=&A[9];
    printf("The number of elements between 1 and 9 are: %i.",b-a);

    // Note: you may not:
    //      multiply or divide with pointers,
    //      add two pointers,
    //      may not apply the bitwise operators on them,
    //      may not add or subtract float or double types from or to pointers,
}