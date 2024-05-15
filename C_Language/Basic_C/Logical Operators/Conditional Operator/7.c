#include <stdio.h>

int main()
{
    int c;
    printf("Enter char:");
    scanf("%d",&c);

    c%2==0 ? printf("Even") : printf("ODD");
    return 0;
}