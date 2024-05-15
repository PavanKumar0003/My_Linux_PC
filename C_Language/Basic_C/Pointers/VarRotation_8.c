/*
8 Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. 
Do this using pointers that point to x,y and z.
*/

#include<stdio.h>
int main(){
    int x,y,z,*p,*q,*r,i;
    printf("enter x,y,z:");
    scanf("%d,%d,%d",&x,&y,&z);
    p=&x;
    q=&y;
    r=&z;
    i=*p;
    *p=*q;
    *q=*r;
    *r=i;
    printf("x=%d,y=%d,z=%d",*p,*q,*r);
    return 0;

}