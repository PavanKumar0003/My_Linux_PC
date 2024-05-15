/*
3.Declare an array of size 10. Enter 10 elements and save them in the array. Print the array .
 Find out the biggest and smallest numbers and their indexes and print.
*/
#include<stdio.h>

int main(){
    int a[10]; int x=0;
    //read elements
    for(int i=0; i<10; i++){
        printf("enter [%d] element:",i);
        scanf("%d",&a[i]);
    }
    //Print all elements;
    printf("\nArray elements are:");
    for(int i=0; i<10; i++) printf("%d,",a[i]);
    //Finding Biggest and Smallest
    for(int i=0; i<10; i++) if(a[i]>x) x=a[i];
    printf("\n%d is big",x);
    for(int i=0; i<10; i++) if(a[i]<x) x=a[i];
    printf("\n%d is Small",x);
    return 0;
}