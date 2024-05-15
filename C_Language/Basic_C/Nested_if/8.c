#include <stdio.h>
int main()
{
    int a,b;
    char x;
    float i;
    printf("Enter a,b:");
    scanf("%d%d", &a,&b);
    printf("Enter Operator:");
    scanf(" %c", &x);

    if(x=='+'){
        i=a+b;
        printf("answ:%d");
    }
    else if(x=='-'){
        i=a-b;
        printf("answ:%d",i);
    }
    else if(x=='*'){
        i=a*b;
        printf("answ:%d",i);
    }
    else if(x=='/'){
        i=a/b;
        printf("answ:%f",i);
    }
    else if(x=='%'){
        i=a%b;
        printf("answ:%f",i);
    }
    return 0;
}