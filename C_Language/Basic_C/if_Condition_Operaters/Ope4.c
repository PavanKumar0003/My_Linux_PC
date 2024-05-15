#include <stdio.h>

int main()
{
    char a,b,c;
    int i,j,k;

    printf("Enter char a:");
    scanf("%c",&a);
    printf("Enter char b:");
    scanf("%*c %c",&b);
    printf("Enter char c:");
    scanf("%*c %c",&c);
    i=a-'0';
    j=b-'0';
    k=c-'0';
    int p=i;
    p=(p*10)+j;
    p=(p*10)+k;
    printf("%d",p);
    return 0;

}