#include<stdio.h>

int main()
{
    int d;
    printf("Enter number:");
    scanf("%d",&d);

    switch(d)  //switch(expression)
    {
        case 1: printf("Sunday"); break;
        case 2: printf("Monday"); break;
        case 3: printf("Tuesday"); break;
        case 4: printf("Wednesday"); break;
        case 5: printf("Thurseday"); break;
        case 6: printf("Friday"); break;
        case 7: printf("Satureday"); break;
        default: printf(".........");
    }

    return 0;
}