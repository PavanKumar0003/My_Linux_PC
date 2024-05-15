#include <stdio.h>
int main()
{
    int x,y,z,w,i;
    printf("Enter x,y,z,w:");
    scanf("%d%d%d%d", &x,&y,&z,&w);

    if(x>y && x>z && x>w){
        printf("%d is big",x);
    }

    else if(y>x && y>z && y>w){
        printf("%d is big",y);
    }
    else if(z>x && z>y && z>w){
        printf("%d is big",z);
    }
    else 
       printf("%d is big",w);

    return 0;
}