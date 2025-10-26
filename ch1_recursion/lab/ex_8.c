#include<stdio.h>
#include<math.h>

int reverse_helper_2(int null,int count,int n){
    if(count==0)return null;
    return reverse_helper_2(null+(n%10)*pow(10,count-1),count-1,n/10);
}

int reverse_helper(int n,int count,int copy){
    if(n==0){
        return reverse_helper_2(n,count,copy);
    }
    return reverse_helper(n/10,count+1,copy);
}


int reverse(int n){
    return reverse_helper(n,0,n);
}

void main(){
    int n=48205234;
    printf("The reverse of %i is %i.",n,reverse(n));

}