#include<stdio.h>
#include<string.h>

typedef struct{
    char month[3];
    short day;
    int year;
}date;

typedef struct{
    date date_;
    char ticker[5];
    float open;
    float high;
    float low;
    float close;
    long volume;
}stocks;

void main(){
    stocks days[12]={{{"Jul",24,2025},"MSFT",508.77,513.67,507.30,510.88,16097400},
                     {{"May",30,2025},"MSFT",459.72,461.68,455.54,460.36,34770500},
                     {{"Apr",25,2025},"GOOG",167.10,168.24,163,163.85,35148100},
                     {{"May",2,2025},"GOOG",164.96,166.7,163.66,165.81,16844900},
                     {{"Feb",24,2025},"META",686.28,687.27,662.45,668.13,15677000},
                     {{"Mar",7,2025},"META",625.37,634.79,800.61,625.66,21375700},
                     {{"Jan",10,2025},"MSFT",345.22,212.5,490.3,112.44,3498745},
                     {{"Jul",24,2025},"MSFT",508.77,513.67,507.30,510.88,16097400},
                     {{"May",30,2025},"MSFT",459.72,461.68,455.54,460.36,34770500},
                     {{"Apr",16,2025},"GOOG",167.10,168.24,163,163.85,35148100},
                     {{"May",2,2025},"GOOG",164.96,166.7,163.66,165.81,16844900},
                     {{"Feb",4,2025},"META",686.28,687.27,662.45,668.13,15677000},};
    FILE *pStocks=fopen("Stocks.tsv","a");
    fprintf(pStocks,"%s","date\topen\thigh\tlow\tclose\tvolume\n");
    for(int i=0;i<12;i++){
        fprintf(pStocks,"%s-%i-%i",days[i].date_.month,days[i].date_.day,days[i].date_.year);
        fprintf(pStocks,"\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%li",days[i].ticker,days[i].open,
                                                    days[i].high,days[i].low,days[i].close,
                                                days[i].volume);
        fprintf(pStocks,"%s","\n");
    }
    fclose(pStocks);
}