#include<stdio.h>

int longestlhelper(char s[],int i,int max,int current){
    if(s[i]=='\0'){
        if(current>max)return current;
        else return max;
    }
    if(s[i]!=' ')return longestlhelper(s,i+1,max,current+1);
    else{
        if(current>max){
            return longestlhelper(s,i+1,current,0);
        }
        else{
            return longestlhelper(s,i+1,max,0);
        }
    }
}


int longestl(char s[]){
    return longestlhelper(s,0,0,0);
}

int longestl2(char s[]){
    int i=0;
    int max=0;
    int current=0;
    while(s[i]!='\0'){
        if(s[i]==' '){
            if(current>max)max=current;
            current=0;
        }
        else{
            current++;
        }
        i++;
    }
    if(current>max)max=current;
    return max;
}

void main(){
    char s[]="Mark Ali Hariri";
    printf("%d",longestl2(s));
}