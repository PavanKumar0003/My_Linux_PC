//14.Write a  function that takes a date as input, and returns 1 if the date is valid, 0 if the date is invalid.

#include<stdio.h>
void date(int,int,int);

int main(){
    int d,m,y;
    printf("Enter d-m-y:");
    scanf("%d-%d-%d",&d,&m,&y);
    date(d,m,y);
    return 0;
}

void date(int d,int m,int y){
    if(m<=12){
        switch(m){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: if(d<=31) printf("Valid");
            else printf("Invalid"); break;
            case 4:
            case 6:
            case 9:
            case 11:if(d<=30) printf("valid");
            else printf("Invalid"); break;
            case 2: if(y%100!=0 && y%4==0 || y%400==0){
                if(d<=29) printf("Valid");
                else printf("Invalid");
            }
            else{
                if(d<=28) printf("Valid");
                else printf("Invalid"); 
            } break;
            default:printf("Invalid"); break;
        }
    }
    return 0;
}