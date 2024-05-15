#include<stdio.h>
#include<stdlib.h>

union student{
    int a;
    char b;
    char arr[4];
}u;

int main(){
    //union student x;  //-> 1st way
    //x.a=20;
    //printf("union x:%d",x.a);

    // u.b='x'; // -> 2nd way
    // printf("union b:%c",u.b);
    u.a=0x12345678;
    printf("%i",u.arr[1]);
    return 0;
}