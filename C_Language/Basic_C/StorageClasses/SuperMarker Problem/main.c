/*
3) WAP - for the 4 departments of a super market : Sales, Purchase, Stock and SuperMarket in four different source code files.
Stock : Maintains a variable for available stock.
Sales : Has one function: Sell – It will reduce the stock by the number of items sold. 
Before selling check if enough stock is available.
Purchase : Has one function : Purchase – will increase the stock by the number of items purchased.
Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.
SuperMarket : Display menu with choices : 1 ) check AvailableStock 2 ) Purchase new items 3) Sell items … 
this should be continuous as long as the user wants to continue. Program should stop when the user wants to quit.

*/
#include<stdio.h>
void stock();
void sale();
void purchase();
int main(){
    int input;
    printf("Namaste, WELCOME TO KM SUPER MARKET"); 
    while(1){
        printf("\nPress 1 for stock:\n Press 2 for sale:\n Press 3 for Purchase:\n Press 0 for Quit:\n");
        scanf("%d",&input);
        if(input==1) stock();
        else if(input==2) sale();
        else if(input==3) purchase();
        else if(input==0) break;
    }
    return 0;
}