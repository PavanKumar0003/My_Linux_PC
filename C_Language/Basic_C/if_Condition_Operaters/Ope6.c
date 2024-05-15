#include <stdio.h>

int main()
{
    int a,b,c,i;
    printf("Enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    i=a;
    a=b;
    b=c;
    c=i;
    printf("a=%d,b=%d,c=%d",a,b,c);
    return 0;

}