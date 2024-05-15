#include <stdio.h>

int main()
{
    char a,b,c;
    int i,j,k;
    printf("Enter a:");
    scanf("%c",&a);
    i = a - '0';

    printf("Enter b:");
    scanf("%*c%c",&b);
    j = b - '0';

    printf("Enter c:");
    scanf("%*c%c",&c);
    k = c - '0';

    int p=i;
    p=(p*10)+j;
    p=(p*10)+k;
    printf("%d",p);
}