/*
In Pointer constants , address cant be changed but value can be changed.
if it is done it throws an error as : {error: assignment of read-only variable 'p'}
*/
#include<stdio.h>

int main(){
    int x=10;
    int *const p=&x;
    int y=0;
    //p=&y;  /*Error*/
    *p=30;
    printf("var:%d",*p);
    return 0;
}