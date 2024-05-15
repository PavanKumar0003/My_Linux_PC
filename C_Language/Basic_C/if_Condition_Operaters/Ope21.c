#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter number:");
    scanf("%d",&n);
    i=n%10;
    printf("%d \n",i);
    n=n/10;
    i=n%10;
    printf("%d\n",i);
    n=n/10;
    i=n%10;
    printf("%d\n",i);
    n=n/10;
    printf("%d\n",n);

    return 0;
}