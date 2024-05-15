#include<stdio.h>

int main(){
    int a,d;
    printf("Enter a,b:");
    scanf("%d%d",&a,&d);
    switch(a>d)
    {
    case 1: printf("a is big");break;
    default: printf("b is big"); break;
    }
    return 0;
}