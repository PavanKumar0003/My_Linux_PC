#include <stdio.h>

int main()
{
    float x,bill;
    printf("Enter Int:");
    scanf("%f",&x);

    if(x>0 && x<=200 ){
        bill =100;
    }
    
    else if(x>=201 && x<=400){
        bill=100+(x-100)*0.65;
    }

    else if(x>=401 && x<=600){
        bill=100+(x-100)*0.80;
    }

    else if(x>=601){
        bill=100+(x-100)*1;
    }
    printf("Bill is:%.2f",bill);
    
    return 0;
}