#include<stdio.h>
static int riceStock;
int Puradd(int );
int saleSub(int);
static int riceStock=100;
int stock(){
    printf("Stock Remaining %d",rc);
    return riceStock;
}

int Puradd(int PurAmt){
    if(riceStock > 2000){
	   printf("No More Space");
	   riceStock-=PurAmt;
	}
    printf("Remaing Stock is %d",riceStock);
}

int saleSub(int sale){
    if(sale > riceStock) printf("Sorry We dont have that much amount");
    else riceStock -= sale;
}