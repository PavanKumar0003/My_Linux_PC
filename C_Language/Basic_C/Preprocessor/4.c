/*
4)  Define  a macro that receives an array and the number of elements in the array as arguments. 
Write a program using this macro to print out the elements of the array. 
Try using this macro for different data types of arrays.*/

#include<stdio.h>

#define SIZE 5
#define fun(arr,SIZE) printf("%d,",arr)

int main(){
    int a[]={1,5,0,22};
    printf("a[]=");
    for(int i=0;i<SIZE;i++) fun(a,SIZE);
}