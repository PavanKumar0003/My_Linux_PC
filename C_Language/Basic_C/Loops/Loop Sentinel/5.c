#include<stdio.h>

int main()
{
    int j,c=0;
    printf("Enter  Number:");
    scanf("%d",&j);
    while(1){
        int x=j%10;
        j=j/10;
        c+=x;
        if(j==0) break;
    }
    printf(" Total Count = %d",c);
    return 0;
}