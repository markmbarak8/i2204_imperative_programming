#include<stdio.h>
#include<math.h>
#include<string.h>

void decodestr(char s[],int start,int end){
    int i=start+1;
    int count=s[start]-'0';
    char ch[100];
    ch[0]='\0';
    while(s[i]!='['){
        count*=10;
        count+=s[i]-'0';
        i++;
    }
    i++;
    int j;
    int c=0;
    for(j=0;i<end;i++,j++,c++){
        ch[j]=s[i];
    }
    for(i=0;i<count;i++){
        for(j=start;j<start+c;j++){
            s[j+c*i]=ch[j-start];
        }
    }
    
    
}

void decode(char s[]){

}

void main(){
    char example[]="2[a]2[c]";
    decodestr(example,0,3);
    decodestr(example,4,8);
    printf(example);
}