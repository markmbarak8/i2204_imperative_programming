#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool palin_helper_2(int count,int n2){
    if(count==0 || count==1)return 1;
    if((int)(n2/pow(10,count-1))!=(n2%10))return 0;
    n2%=(int)pow(10,count-1);
    n2/=10;
    return palin_helper_2(count-2,n2);

}

bool palin_helper(int n,int count,int copy){
    if(n==0){
        return palin_helper_2(count,copy);
    }
    return palin_helper(n/10,count+1,copy);
}

bool ispalindromic(int n){
    return palin_helper(n,0,n);
}

void main(){
    int n=98189;
    if(ispalindromic(n))printf("%i is palindromic.",n);
    else printf("%i is not palindromic.",n);
}