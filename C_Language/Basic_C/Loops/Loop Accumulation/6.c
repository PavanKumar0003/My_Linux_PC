#include<stdio.h>

int main()
{
    int a,b,i=1,add=0;
    
    printf("Enter 2 Number's:");
    scanf("%d,%d",&a,&b);
    while(i<=b){
        add+=a;
        i++;
    }
    printf("Multi = %d",add);
    return 0;
}