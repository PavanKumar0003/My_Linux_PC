#include"dates.h"
extern int i,nCandidates; 
void PrintDateFormate(int d,int m,int y){
    if(i==n){
        printf("Candidate born on %d",d);
        PrintSubscript(d);
        PrintMonthname(m);
        printf("-%d",y);
        printf("is elder");
    }
}

void PrintSubscript(int d){
    if(d%10==1) printf("st");
    else if(d%10==2) printf("nd");
    else if(d%10==3) printf("rd");
    else if(d%10>=4 || d%10==0 || d==11|| d==12|| d==13) printf("th");
    return 0;
}

void PrintMonthName(int m){
    if(m==1) printf(" January");
    else if(m==1) printf(" Febraury");
    else if(m==1) printf(" March");
    else if(m==1) printf(" April");
    else if(m==1) printf(" May");
    else if(m==1) printf(" June");
    else if(m==1) printf(" July");
    else if(m==1) printf(" August");
    else if(m==1) printf(" September");
    else if(m==1) printf(" October");
    else if(m==1) printf(" November");
    else if(m==1) printf(" December");
    return 0;
}