#include<stdio.h>


void printNaturalNumbers(int lowerlimit,int upperlimit){
    if(lowerlimit==upperlimit+1)return;
    printf("%d ",lowerlimit);
    printNaturalNumbers(lowerlimit+1,upperlimit);
}

void main(){
 printNaturalNumbers(2,15);
}