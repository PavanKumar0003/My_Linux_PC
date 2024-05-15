#include<stdio.h>
extern int riceStock;
void purchase(){
    int PurAmt;
    printf("Enter Purchase amount of Rice:");
    scanf("%d",&PurAmt);
    riceStock= riceStock+ PurAmt;
}