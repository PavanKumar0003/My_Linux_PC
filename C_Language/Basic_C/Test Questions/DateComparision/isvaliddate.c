#include"dates.h"

int isvalidDate(int d,int m,int y){
    switch (m){
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:
    case 12: if(d<=31) return 1;
                else return 0;
                break;
    case 4:
    case 6:
    case 8:
    case 10: if(d<=30) return 1;
                else return 0;
                break;
    case 2: if(isLeapYear(y,d)) return 1;
                else return 0;
                break();
    default: return 0;
             break;
    }
}

int isLeapYear(int y, int d){
    if((y%100!=0 && y%4==0) || y%400==0){
        if(d<=29) return 1;
        else return 0;
    }
    else{
        if(d<=28) return 1;
        else return 0;
    }
}