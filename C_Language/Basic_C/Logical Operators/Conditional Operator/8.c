#include <stdio.h>

int main()
{
    int c;
    printf("Enter num:");
    scanf("%d",&c);

    c>0 ? printf("positive") : (c<0 ? printf("negative") : printf("Zero"));
    return 0;
}