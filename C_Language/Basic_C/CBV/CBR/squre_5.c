/*
5 "Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
eg., print the square of each number of an array :
for each number of the array :
    call the function
    main gets the static variable address as return value from function.
    main puts the array element in static variable.
in the function :
    create static variable.
    if static variable value is not zero, print its square.
    function sends static variable address back to main."
    */
#include<stdio.h>

static int a[]={9,1,2,3,4}, i=0;
int *sqr();

int main(){
    int *q;
    for(int i=0;i<5;i++){
        q=sqr();
        a[i]=*q;
        printf("a[%d]=%d\n",i,a[i]);
    }
}

int *sqr(){
    static int p=0;
    if(a[i]!=0){
        p=a[i]*a[i];
        i++;
        return &p;
    }
}
