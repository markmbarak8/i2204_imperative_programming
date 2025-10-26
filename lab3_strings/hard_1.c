#include<stdio.h>
#include<string.h>

int compress(char chars[]){
    char s[100];
    int u=0;
    char t=chars[0];
    int count=1;
    for(int i=1;chars[i]!='\0';i++){
        if(chars[i]!=t){
            s[u]=t;
            u++;
            if(count!=1){
                s[u]=count+'0';
                u++;
            }
            t=chars[i];
            count=1;
        }
        else{
            count++;
        }
    }
    s[u]=t;
    u++;
    if(count!=1){
        s[u]=count+'0';
        u++;
    }
    for(int j=0;j<u;j++){
        chars[j]=s[j];
    }
    chars[u-1]='\0';
    return u;
}

void main(){
    char chars[]={'a','a','a','b','b','b','b','c','c','t','t','t'};
    int l=compress(chars);
    printf("%d\n",l);
    printf("%s\n",chars);

}