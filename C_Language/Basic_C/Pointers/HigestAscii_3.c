//3 Write a program to take input for two character variables using pointers and
// find out which character has higher ascii value.

#include<stdio.h>
int main(){
    char x,y,*p,*q;
    printf("Enter x,y:");
    scanf("%c%*c%c",&x,&y);
    p=&x;
    q=&y;
    if(*p>*q) printf("X has higest ascii value: %d",*p);
    else printf("Y has higest ascii value: %d",*q);
    return 0;
}