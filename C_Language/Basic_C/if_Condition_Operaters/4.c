#include<stdio.h>

int main()
{
    float n;

    printf("Enter Number of Calls:");
    scanf("%f",&n);
    if(n<=100){
        printf("Bill is: 250/-");
    }

    else{
        n = (n-100) * 1.25 + 250;
        printf("Bill is :%.2f",n);
    }
}