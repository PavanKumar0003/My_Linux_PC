#include <stdio.h>

int main()
{
    int a,b,i;
    printf("Enter a,b:");
    scanf("%d %d",&a,&b);
    i=a;
    a=b;
    b=i;
    printf("a=%d,b=%d",a,b);
    return 0;

}