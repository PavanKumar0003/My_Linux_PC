/*
5.Declare 3 pointer variables of integer type, and an integer variable. 
Assign the address of integer variable to the 3 pointers. 
Print the variable value using indirection on each pointer variable. 
Change the variable value directly and check the values of each of the pointers using indirection.
Change the variable value , using each pointer and print the variable value and indirected values
of all pointers every time you change.*/


#include<stdio.h>

int main(){
    int *p,*q,*r,x=30;
    p=&x;
    q=&x;
    r=&x;
    printf("p=%d,q=%d,r=%d",*p,*q,*r);
    x=40;
    printf("\nafter changing value:p=%d,q=%d,r=%d",*p,*q,*r);
    printf("\np=%d,q=%d,r=%d",*p=80,*q=40,*r=60);
    printf("\nx=%d",x);
    return 0;
}