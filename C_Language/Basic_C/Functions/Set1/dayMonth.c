//11.Write a function to accept a month and year as input, and return the number of days in that month as output. print the number of days in main.


#include<stdio.h>
int dayCount(int,int);

int main(){
    int y,m;
    printf("Enter Month,year:");
    scanf("%d,%d",&m,&y);
    printf("Number days are:%d",dayCount(m,y));
    return 0;
}

int dayCount(int m,int y){
    int days;
    if(m==1 || m==3|| m==5 || m==7 || m==8 ||m==11 || m==12) days=31;
    else if(m==4 || m==6|| m==9 || m==10) days = 30;
    else if (m==2){
        if(y%100!=0 && y%4==0 || y%400==0) days = 29;
        else days = 28;
    }
    else printf("Invalid month");
    return days;
}