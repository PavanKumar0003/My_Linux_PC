#include <stdio.h>

int main()
{
    float p;
    printf("enter FLoating number: ");
    scanf("%f",&p);
    int x=(int)p %10;
    int y=p*10;
    printf("%d\n",x);
    printf("%d",y%10);
    return 0;
}