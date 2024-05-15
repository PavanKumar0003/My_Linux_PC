#include<stdio.h>

int main()
{
    int d;
    printf("Enter number:");
    scanf("%d",&d);

    switch(d%2==0)  //switch(expression)
    {
        case 1: printf("Odd"); break;
        default: printf("Even");
    }

    return 0;
}