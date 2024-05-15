/*
1 Write a program to swap two numbers using Call by Value and Call by Reference.
*/

#include<stdio.h>

void swapCBR(int *p,int *q);
void swapCBV(int,int);

int main(){
    int a=30,b=50;
    swapCBV(a,b);
    swapCBR(&a,&b);
    printf("\nRa=%d,Rb=%d",a,b);
    return 0;
}

void swapCBR(int *p,int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;
}

void swapCBV(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    printf("Va=%d,Vb=%d",a,b);
}