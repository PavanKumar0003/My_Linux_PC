/*
4	Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements and print them:</br>
int arr[5] = {};
int arr[10] = {2.4,5.6,7.3};
int arr[3] = {1,2,3,4,5};
int arr[0] = {};
int arr[0] = {1,2,3,4,5};
int arr[] = {};
int arr[‘a’];
*/

#include<stdio.h>

int main(){
    int a[5]={}; //array with limit 5 elements with empty set 
    int b[10]={2.3,4.5,7.2}; //array with 10 elements and float values
    int c[3]={1,2,3,4,5,6}; //array with 3 elements limit and 6 elements set
    int d[0] = {}; //array with 0 index and empty set
    int e[0] = {1,2,3,4,5}; //array with 0th index and set of 5 elements
    int f[] = {}; //array with empty set and array
    //int g[‘a’]; //array with a character
    printf("%d,%d,%d,%d,%d",a[5],b[10],c[3],d[0],e[0]);
    return 0;
}