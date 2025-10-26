#include<stdio.h>
#include<math.h>

int reverse_helper(int nb,int rev){
    if(nb==0)return rev/10;
    return reverse_helper(nb/10,(rev+nb%10)*10);
}

int reverse(int nb){
    return reverse_helper(nb,0);
}

void main(){
    printf("%d",reverse(343567));
}