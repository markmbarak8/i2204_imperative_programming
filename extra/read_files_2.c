#include<stdio.h>
#include<string.h>
#define size 50
#define nrows 300153

typedef struct{
    char airline[size];
    char flight[size];
    char source_city[size];
    char departure_time[size];
    char stops[size];
    char arrival_time[size];
    char destination_city[size];
    char class[size];
    float duration;
    int days_left;
    int price;
}flight;

void a(char s1[],char s2[],int s,int e){
    int j=0;
    for(int i=s;i<e;i++,j++){
        s2[j]=s1[i];
    }
}

void main(){
    flight flights[nrows];
    FILE *pAirlines=fopen("C:\\Users\\mcc.DESKTOP-470HVN8\\Downloads\\airlines_flights_data.csv","r");
    int i=0;
    char row[100];
    while(fgets(row,sizeof(row),pAirlines)!=NULL){
        if(i==0){
            i++;
            continue;
        }
        int u=-1,l=1;
        for(int j=0;j<strlen(row);j++){
            if(row[j]=','){
                if(u==-1) u=j;
                else{
                    switch(l){
                        case 1:
                            a(row,flights[i].airline,u+1,j);
                            break;
                        case 2:
                            a(row,flights[i].flight,u+1,j);
                            break;
                        case 3:
                            a(row,flights[i].source_city,u+1,j);
                            break;
                        case 4:
                            a(row,flights[i].departure_time,u+1,j);
                            break;
                        case 5:
                            a(row,flights[i].stops,u+1,j);
                            break;
                        case 6:
                            a(row,flights[i].arrival_time,u+1,j);
                            break;
                        case 7:
                            a(row,flights[i].destination_city,u+1,j);
                            break;
                        case 8:
                            a(row,flights[i].class,u+1,j);
                            break;
                        case 9:
                        float d=0;
                            for(int k=u+1;k<j;k++){
                                if(row[k]=='.')
                            }
                        case 10:
                    }
                    u=j;
                    l++;
                }

            }
        }
        i++;
    }
    fclose(pAirlines);
}