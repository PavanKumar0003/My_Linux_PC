#include <stdio.h>

int main()
{
    int p,x,y,z;

    printf("Enter X,Y,Z:");
    scanf("%d%d%d",&x,&y,&z);
    p = x>y ? (x>z ? x:z): (y>z ? y:z);
    printf("%d is big", p);
    return 0;
}