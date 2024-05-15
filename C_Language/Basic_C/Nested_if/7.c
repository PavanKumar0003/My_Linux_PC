#include <stdio.h>

int main()
{
    int x,bill;
    printf("Enter Int:");
    scanf("%d",&x);

    if(x<=200){
        bill =100;
    }
    
    else if(x<=400){
        bill=100+(x-100)*0.65;
    }

    else if(x<=600){
        bill=100+(x-100)*0.80;
    }

    else if(x>=601){
        bill=100+(x-100)*1;
    }
    printf("Bill is:%d",bill);
    
    return 0;
}