#include <stdio.h>

int main()
{
    int a=4532;
    int b= a%10;
    a=a/10;
    int c = a%10;
    a=a/10;
    int d=a%10;
    int e=a/10;
    int p=b;
    p=(p*10)+c;
    p=(p*10)+d;
    p=(p*10)+e;
    printf("%d \n",p);

    return 0;
}