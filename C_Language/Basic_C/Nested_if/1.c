#include <stdio.h>
int main()
{
    int x,y,z,w,i;
    printf("Enter x,y,z,i:");
    scanf("%d%d%d%d", &x,&y,&z,&w);
    i=x;
    if(i<y){
        i=y;
    }
    if(i<z){
        i=z;
    }
    if(i<w){
        i=w;
    }
    printf("%d is bigger",i);
    return 0;
}