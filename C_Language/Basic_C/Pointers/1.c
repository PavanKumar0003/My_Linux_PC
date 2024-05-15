/*
1 .Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.
Print the size of pointer and its indirected value (apply * operator).
*/

#include<stdio.h>

int main(){
    int x=10;
    int *p=&x;
    printf("address:%p",p);
    printf("\nValue:%d",*p);
    printf("\nSize x:%d",sizeof(x));
    printf("\nSize pointer:%d",sizeof(*p));
    return 0;
}