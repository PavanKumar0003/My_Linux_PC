//7 Write a program to find the biggest of three numbers using pointers that point to those numbers.

#include<stdio.h>

int main(){
    int x,y,z;
    int *p,*q,*r;
    printf("enter x,y,z:");
    scanf("%d,%d,%d",&x,&y,&z);
    p=&x;
    q=&y;
    r=&z;
    if((*p>*q) && (*p>*r)) printf("X is biggest");
    else if((*q>*p) && (*q>*r)) printf("Y is biggest");
    else if((*r>*p) && (*r>*q)) printf("Z is biggest");
    return 0;
}