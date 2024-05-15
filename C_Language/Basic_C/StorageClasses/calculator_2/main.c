/*
2) Create the operand variables as global variables and use them in the operation functions directly,
without passing as arguments. Function return value should be stored in another global variable in
operations file and be used to print in main.
*/

#include<stdio.h>
//operands
int a,b,result;
char c;
int calculator();

int main(){
    printf("enter a,b:");
    scanf("%d,%d",&a,&b);
    printf("enter Operation type(+,-,*,/,%%):");
    scanf(" %c",&c);
    printf("Result is:%d",extern result);
    return 0;
}