#include<stdio.h>

int main()
{
    int a,i=10;
    printf(" Enter the number:");
    scanf("%d",&a);

    while(i>=1){
        printf("%d x %d = %d\n",a,i,a*i);
        i--;
    }

    return 0;
}