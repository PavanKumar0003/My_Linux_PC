#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("%d \n",n);
    n=n/10;
    printf("%d\n",n);
    n=n/10;
    printf("%d\n",n);
    n=n/10;
    printf("%d\n",n);

    return 0;
}