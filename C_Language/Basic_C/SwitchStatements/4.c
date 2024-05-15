#include <stdio.h>

int main()
{
    char c;
    int a,b;
    float f;
    printf("Enter A,B:");
    scanf("%d,%d",&a,&b);
    printf("Enter Operation:");
    scanf(" %c",&c);

    switch (c)
    {
    case '+': printf("A+B=%d",a+b);break;
    case '-': printf("A-B=%d",a-b);break;
    case '/': printf("A/B=%f",a/b);break;
    case '%': printf("A%B=%d",a%b);break;
    case '*': printf("A*B=%d",a*b);break;
    default: printf("...");break;
    }
}