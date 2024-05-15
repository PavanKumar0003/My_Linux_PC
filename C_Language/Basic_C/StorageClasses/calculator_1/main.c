/*
Rewrite the calculator program so that the main function is in main.c , 
remaining functions are in another source code file, operations.c.
1)Create the operand variables as global variables and use them in the operation functions directly,
without passing as arguments. Function returns the result as return value.
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
    printf("Result is:%d",calculator());
    return 0;
}