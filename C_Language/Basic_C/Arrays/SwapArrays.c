/*
10 Write a program to swap two arrays in reverse order.
eg.,
input :
array1 = {1,2,3,4,5};
array2 = {6,7,8,9,10};
output:
array1: {10,9,8,7,6}
array2: {5,4,3,2,1}
*/

#include<stdio.h>

int main(){
    int i,a[]={1,2,3,4,5},b[]={6,7,8,9,10},temp;
    for(int i=4; i>=0; i--){
        temp = a[i];
        a[i]=b[4-i];
        b[4-i]=temp;
    }
    printf("array a[]:");
    for(int i=0;i<5;i++) printf("%d,",a[i]);
    printf("\narray b[]:");
    for(int i=0;i<5;i++) printf("%d,",b[i]);

}