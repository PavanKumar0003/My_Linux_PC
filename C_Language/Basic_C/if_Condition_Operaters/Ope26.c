#include <stdio.h>

int main()
{
    int a,i;
    printf("Enter number:");
    scanf("%d",&a);
    i=a%10;
    printf("   %d\n",i);
    a=a/10;
    i=a%10;
    printf("  %d \n",i);
    a=a/10;
    i=a%10;
    printf(" %d  \n",i);
    a=a/10;
    printf("%d   \n",a);
    return 0;

}