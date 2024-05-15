/*
1. Write the following program :
Declare an integer array of size 100.
Assign numbers 1-100 to each element of the array.
Print all the numbers.
Print all even elements.
Print all odd elements.
Add 5 to each element and print 6 – 105 numbers.
*/

#include<stdio.h>

int main(){
    int arr[15]= {1,2,3,4,5,6,7,8,9,0,11,12,13,14,15},x=0;   //array arr with size of 100 elements

    printf("numbers are :");
    for(int i=0; i<15; i++) printf("%d,",arr[i]);

    printf("\nEven numbers are :");
    for(int i=0; i<15; i++)     
        if(arr[i]%2==0) printf("%d,",arr[i]);

    printf("\nODD numbers:");
    for(int i=0; i<15; i++)
        if(arr[i]%2!=0) printf("%d,",arr[i]);

    printf("\nAdd 5:");
    for(int i=0; i<15; i++) printf("%d,",x=arr[i]+5);
    return 0;
}