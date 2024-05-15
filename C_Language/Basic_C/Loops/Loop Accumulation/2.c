#include<stdio.h>

int main()
{
    int n,i=1,j,wd,Swd=0,da,Sda=0;
    
    printf("Enter No of Customers:");
    scanf("%d",&n);
    
    while(i<=n){
        printf("Enter  Amount:");
        scanf("%d",&j);
        if(j<0) Swd+=wd;
        else if(j>0) Sda+=da;
        i++;
    }
    printf(" Total Withdraw Amount = %d",Swd);
    printf(" Total Deposite Amount = %d",Sda);
    return 0;
}