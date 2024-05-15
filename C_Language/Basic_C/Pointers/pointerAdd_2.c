//2 Write a program to add two variables using thier pointers.#include<stdio.h>

int main(){
    int x=10,y=20,*p,*q,add;
    p=&x;
    q=&y;
    add = *p + *q;
    printf("add:%d",add);
    return 0;
}