#include <stdio.h>

int main()
{
    int x,y;

    printf("Enter X,Y:");
    scanf("%d%d",&x,&y);
    if(x>y)
            printf("%d is big",x);

    else 
        printf("%d is big",y);
    return 0;
}