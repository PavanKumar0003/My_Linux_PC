//3) print smallest of 4 numbers using conditional operators. Dont use nested conditional operators. Use extra variables.

#include<stdio.h>

int main()
{
    int p,q,r,s,x,y,z;
    printf("enter p,q,r:");
    scanf("%d%d%d",&p,&q,&r);

    x=p<q?p:q;
    y=r<s?r:s;
    z=x<y?x:y;
    printf("%d is small",z);
    return 0;
}