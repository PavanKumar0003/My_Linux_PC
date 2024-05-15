/*
5) Read an integer and print it back using function pointers for printf and scanf.

printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);
*/
#include<stdio.h>
#include<string.h>

int (*fun[])(char*,...)={printf,scanf};

int main(){
    int a;
    fun[0]("Enter a:");
    fun[1]("%d",&a);
    fun[0]("%d",a);
    return 0;
}

