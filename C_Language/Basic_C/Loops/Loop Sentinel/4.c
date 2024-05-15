#include<stdio.h>

int main()
{
    int j,c=0;
    printf("Enter  Number:");
    scanf("%d",&j);
    while(1){
        j=j/10;
        c++;
        if(j==0) break;
    }
    printf(" Total Count = %d",c);
    return 0;
}