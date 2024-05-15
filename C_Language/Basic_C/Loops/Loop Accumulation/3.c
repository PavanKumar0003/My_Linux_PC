#include<stdio.h>

int main()
{
    int n,i=1,Et=0,Ot=0;
    
    printf("Enter Number:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0) Et+=i;
        else Ot+=i;
        i++;
    }
    printf(" Total Even = %d",Et);
    printf(" Total Odd = %d",Ot);
    return 0;
}