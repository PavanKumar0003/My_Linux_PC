#include<stdio.h>

int main()
{
    int a,i=1;
    printf(" Enter the number:");
    scanf("%d",&a);

    while(i<=a){
        printf("NUM = %d\n",i);
        i++;
    }

    return 0;
}