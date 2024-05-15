/*
4 Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer
in succession and print the value of the variable using indirection operator on the pointer.*/

#include<stdio.h>

int main(){
    int a=10,b=30,c=40,*p;
    p=&a;
    printf("\nAddress of a:%p",p);
    p=&b;
    printf("\nAddress of b:%p",p);
    p=&c;
    printf("\nAddress of c:%p",p);
    return 0;
}