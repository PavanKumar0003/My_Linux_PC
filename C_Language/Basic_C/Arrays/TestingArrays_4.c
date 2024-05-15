/*
4 Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements and print them:</br>
int arr[5] = {};   --> garbage
int arr[10] = {2.4,5.6,7.3};
int arr[3] = {1,2,3,4,5};
int arr[0] = {};
int arr[0] = {1,2,3,4,5};
int arr[] = {};
int arr[‘a’];
*/

#include<stdio.h>

int main(){
    int arr[10] = {2.4,5.6,7.3};
    printf("%d",arr[10]);
    return 0;
}