#include<stdio.h>

int main()
{
    int n,i=1,a,b;
    char c;
    float j;
    printf(" Enter the Iterations :");
    scanf("%d",&n);

    while(i<=n){
        printf("Enter a,b =");
        scanf("%d,%d",&a,&b);
        printf("Enter char_%d = ",i);
        scanf(" %c",&c);
        if(c=='+') printf("ADD=%d\n",a+b);
        if(c=='-') printf("SUB=%d\n",a-b);
        if(c=='*') printf("MUL=%d\n",a*b);
        j=(float)a/(float)b);
        if(c=='/') printf("DIV(Q)=%f\n",j);
        if(c=='%') printf("DIV(R)=%d\n",a%b);
        i++;
    }

    return 0;
}