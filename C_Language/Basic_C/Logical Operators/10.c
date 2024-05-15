#include <stdio.h>

int main()
{
    int n;
    printf("Enter year:");
    scanf("%d",&n);
    if(n%100 != 0 && n%4 == 0 || n%400==0 ){
         printf("It's a Leap year");
    }
    else 
    printf("It's a NOT Leap year");      

    return 0;
}