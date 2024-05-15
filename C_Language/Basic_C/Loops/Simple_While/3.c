#include<stdio.h>

int main()
{
    int a,b;
    printf(" Enter the 2 number:");
    scanf("%d%d",&a,&b);

    while(a<=b){
        if(a%2==0) printf("EVEN=%d\n",a);
        a++;
    }
    a=0;
    while(a<=b){
        if(a%2!=0) printf("ODDS =%d\n",a);
        a++;
    }

    return 0;
}