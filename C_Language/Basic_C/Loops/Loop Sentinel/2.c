#include<stdio.h>

int main()
{
    int n,i=1,j,wd=0,Swd=0,da=0,Sda=0;
    
    
    while(1){
        printf("Enter  Amount:");
        scanf("%d",&j);

        if(j<0){
            Swd+=j;
            wd++;
        }
        else if(j>0){
            Sda+=j;
            da++;
        }

        else break;
    }
    printf(" Total Withdraw Count = %d",wd);
    printf(" Total Deposite Count = %d",da);
    return 0;
}