/*
In constant to a Pointer, address can be changed but value cant be changed.
if it is done it throws an error as : {error: assignment of read-only variable '*p'}
*/
#include<stdio.h>

int main(){
    int x=10;
    int const (*p)=&x;
    int y=0;
    p=&y; 
    int z=69;
    p=&z; 
    //*p=30;  /*Error*/
    printf("var:%d",*p);
    return 0;
}