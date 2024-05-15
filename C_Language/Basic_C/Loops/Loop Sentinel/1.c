#include<stdio.h>

int main()
{
    int n,i=1,j,wd,Swd=0,da,Sda=0;
    
    
    while(1){
        printf("Enter  Amount:");
        scanf("%d",&j);

        if(j<0) Swd+=j;
        else if(j>0) Sda+=j;
        else break;
    }
    printf(" Total Withdraw Amount = %d",Swd);
    printf(" Total Deposite Amount = %d",Sda);
    return 0;
}