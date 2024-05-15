#include<stdio.h>

int main()
{
    char a,b;
    printf("Enter char's:");
    scanf("%c%*c%c",&a,&b);
    printf("%c%c",a,b);
    return 0;
}