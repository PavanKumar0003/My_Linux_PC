#include<stdio.h>

int main()
{
    int a=100;
    int *p=&a;
    printf("%p\n",p);
    p=p+1.0;
    printf("%p",p);
}