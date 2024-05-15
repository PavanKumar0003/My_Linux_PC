#include <stdio.h>

int main()
{
    int n;
    printf("Enter year:");
    scanf("%d",&n);
    if(!(n%4)){
        if(!(n%100)){
            if(!(n%400)){
                printf("It's a Leap year");
            }
            else  printf("Not a Leap year");
        }
        else printf("It's a Leap year");
    }
    else printf("Not a Leap year");

    return 0;
}