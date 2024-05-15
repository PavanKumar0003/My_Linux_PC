#include <stdio.h>

int main()
{
    int x,y,z,i;

    printf("Enter X,Y,Z:");
    scanf("%d%d%d",&x,&y,&z);
    
    if(x>y && x>z){
            printf("%d is big",x);
        }

    else if(y>x && y>z){
            printf("%d is big",y);
        }

    else 
      printf("%d is big",z);

    return 0;
}