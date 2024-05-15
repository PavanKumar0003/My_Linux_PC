#include<stdio.h>

int main()
{
    int n,i=1,j;
    printf(" Enter the number:");
    scanf("%d",&n);

    while(i<=n){
        printf("Enter Number%d = ",i);
        scanf("%d",&j);
        if(j>0) printf("%d is Positive \n",j);
        else if(j<0) printf("%d is Negative \n",j);
        else printf("%d is Zero \n",j);
        i++;
    }

    return 0;
}