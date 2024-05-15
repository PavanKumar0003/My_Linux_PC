#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter number:");
    scanf("%d",&n);
    i=n/1000;
    printf("%d \n",i);
    n=n%1000;
    i=n/100;
    printf("%d\n",i);
    n=n%100;
    i=n/10;
    printf("%d\n",i);
    n=n%10;
    printf("%d\n",n);

    return 0;
}