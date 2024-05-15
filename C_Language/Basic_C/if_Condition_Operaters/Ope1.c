#include <stdio.h>

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    n=n%10;
    printf("%d",n);
    return 0;
}