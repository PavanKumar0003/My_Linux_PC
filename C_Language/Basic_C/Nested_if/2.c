#include <stdio.h>
int main()
{
    int x,y,z,w;
    printf("Enter x,y,z,w:");
    scanf("%d%d%d%d", &x,&y,&z,&w);

    if(x>y){
        if(x>z){
            if(x>w) printf("%d is big",x);
            else printf("%d is big",w);
        }
         else if(z>w){
            printf("%d is big",z);
        } 
    else printf("%d is big",w);
}
    else if(y>w){
        printf("%d is big",y);
    }

    else printf("%d is big",w);
    return 0;
}