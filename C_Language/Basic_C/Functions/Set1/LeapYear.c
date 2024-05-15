//10) Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.

#include<stdio.h>
int LeapYear(int);

int main(){
    int year;
    printf("Enter year:");
    scanf("%d",&year);

    if(LeapYear(year)) printf("Leap year");
    else printf("Not Leap");
    return 0;
}

int LeapYear(int l){
    if (l%100!=0 && l%4==0 || l%400==0) return 1;
    else return 0;
}