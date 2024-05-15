#include<stdio.h>
int saleSub(int);
void sale(){
    int sale;
    printf("Enter the Sale amount of Rice:");
    scanf("%d",&sale);
    saleSub(sale);
}