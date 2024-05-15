#include <stdio.h>

int main()
{
    char a;
    printf("Enter char:");
    scanf("%c",&a);

    int b=(int)a;

    b>=65 && b<=90 || b>=97 && b<=122 ? printf("its a character"):printf("its a NoT character") ;

    return 0;
}