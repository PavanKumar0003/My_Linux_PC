#include<stdio.h>

int main()
{
    int n,i=1,c;
    printf(" Enter the number:");
    scanf("%d",&n);

    while(i<=n){
        printf("Enter char_%d =",i);
        scanf(" %c",&c);
        if(c>='a' && c<='z' || c>='A' && c<='Z') printf("Its an APLHABET\n");
        else printf("Its NOT an APLHABET\n");
        i++;
    }

    return 0;
}