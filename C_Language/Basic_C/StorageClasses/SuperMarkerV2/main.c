/*
1) Stock variable should be limited to stock.c file, it should not be directly accessible outside. 

2) change sales option such that, when the customer wants to buy more items than the available stock, then the program gives the below 2 options
    1) Sell the available stock (sell whatever available, stock becomes 0)
    2) cancel the sales (stock remains as it is)

3) Change purchase option such that, when the supervisor wants to purchase more stock than the available space, then the program gives the below 2 options
    1) Purchase to fill the space( stock becomes full to the capacity)
    2) cancel the purchase (stock remains as it is)

4) When user chooses 4 - Quit option, 
Print the below report before stopping the program:
1) closing stock
2) No of sales
3) No of items sold
4) No of purchases
5) No of items purchased
6) No of total customers visited
*/

#include<stdio.h>
int stock(int);
void sale();
void purchase();

int main(){
    int input;
    while(input > 0){
        printf("Press 1 for stock:\n Press 2 for sale:\n Press 3 for Purchase:\n Press 0 for Quit:\n");
        scanf("%d",&input);
        if(input==1) stock();
        else if(input==2) sale();
        else if(input==3) purchase();
        else if(input==0) break;
    }
    return 0;
}