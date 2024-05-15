#include<stdio.h>

int main()
{
    float add=0;
    int n,i=1;
    
    printf("Enter Number:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){   //Even number(-)
           add=1.0-(1.0 / (float)i);
        }
        else //Odd (+)
        add+=(1.0 / (float)i);
        i++;
    }
    printf("add = %f",add);
    return 0;
}