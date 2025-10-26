#include<stdio.h>

int countdigitshelper(int a,int c){
    if(a==0)return c;
    return countdigitshelper(a/10,c+1);
}

int countdigits(int a){
    return countdigitshelper(a,0);
}

int sumofdigitshelper(int a,int l,int sum,int i){
    if(sum<0)return -1;
    if(i==l)return sum;
    return sumofdigitshelper(a/10,l,sum+(a%10),i+1);
}

int sumofdigits(int a){
    return sumofdigitshelper(a,countdigits(a),0,0);
}

void main(){
    int a=34678;
    printf("a has %d digits.\n",countdigits(a));
    printf("The sum of the digits of a is %d.\n",sumofdigits(a));
}