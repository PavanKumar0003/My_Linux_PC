#include <stdio.h>

int main()
{
    float bill;
    int x;
    printf("Enter Int:");
    scanf("%d",&x);

    switch(x)
    {
    case 0 ... 200: bill = 100;
     printf("Bill is:%.2f",bill);
     break;

    case 201 ... 400: bill = 100+(x-100)*0.65;
     printf("Bill is:%.2f",bill);
     break;

    case 401 ... 600: bill = 100+(x-100)*0.80;
     printf("Bill is:%.2f",bill);
     break;

    default: 
    bill = 100+(x-100)*1;
    printf("Bill is:%.2f",bill);
    break;
    }
    
    return 0;
}