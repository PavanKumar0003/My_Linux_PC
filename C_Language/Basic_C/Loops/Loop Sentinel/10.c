#include<stdio.h>

int main()
{
    char c,n;
    int a,b;
    float j;

    while(1){
        printf("Enter a,b:");
        scanf("%d,%d",&a,&b);
        printf("enter Operator:");
        scanf(" %c",&c);

        if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%'){

            if(c=='+') printf("A+B=%d\n",a+b);
            if(c=='-') printf("A-B=%d\n",a-b);
            if(c=='*') printf("A*B=%d\n",a*b);
            j=(float)a/(float)b;
            if(c=='/') printf("A/B=%f\n",j);
            if(c=='%') printf("A%B=%d\n",a%b);
        }
        else break;

        printf("U want to continue:");
        scanf(" %c",&n);
        if(n=='n') break;

    }
    return 0;
}