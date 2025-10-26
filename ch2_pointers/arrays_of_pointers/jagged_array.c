#include<stdio.h>

void main(){
    // A jagged array is an array where the second order arrays don't have the same length
    // int a[][3]={{1,2},{3,4,5},{6,7,8,9}}; // we obvoiusly can't declare a jagged array like we do with normal 2-d arrays
    // so we need to first declare an array of pointers; then declare the subarrays then assign them.
    int *a[3];
    int x[]={1,2};
    int y[]={3,4,5};
    int z[]={6,7,8,9};
    a[0]=x;a[1]=y;a[2]=z;
    printf("%i\n",*(*(a+1)+1));
}