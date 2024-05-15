#include <stdio.h>

int main()
{
    int x,y,z,i;

    printf("Enter X,Y,Z:");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y){
        if(x>z){
            printf("%d is big",x);
        }
    }

    if(y>x){
        if(y>z){
            printf("%d is big",y);
        }
    }

    if(z>x){
        if(z>y){
            printf("%d is big",z);
        }
    }

    return 0;
}