#include<stdio.h>
extern int riceStock;
void sale(){
    int sale;
    printf("Enter the Sale amount of Rice:");
    scanf("%d",&sale);
    if(sale > riceStock) printf("\nSorry We dont have that much amount\n");
    else  riceStock = riceStock-sale;
    printf("Remainig Stock is-%d\n",riceStock);
    return 0;
}
