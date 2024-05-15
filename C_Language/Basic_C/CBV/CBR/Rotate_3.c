/*
3 Write a function that can rotate the values of three variables. print the results in main function.
*/

//Call by referance
void swap(int *p,int *q,int *r);
#include<stdio.h>
int main(){
    int a=30,b=50,c=90;
    swap(&a,&b,&c);
    printf("a=%d,b=%d,c=%d",a,b,c);
    return 0;
}

void swap(int *p,int *q,int *r){
    int t;
    t=*p;*p=*q;*q=*r;*r=t;
}