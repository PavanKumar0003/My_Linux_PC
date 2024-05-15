#include<stdio.h>

int main(){
    char arr[20]= "Sam Baggi";
    char *ptr=arr;
    ptr="djfsdbk";
    ptr[2]='x';
    printf("%s",ptr);
}