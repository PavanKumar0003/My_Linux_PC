#include<stdio.h>

int main()
{
    int n,m,i=1;
    printf(" Enter the no.of number:");
    scanf("%d",&n);
    
    printf(" Enter the Ace or Dce:");
    scanf("%d",&m);

    if(m==1){
        while(i<=n){
            printf("Aec Order:");
            printf("%d\n",i);
            i++;
        }
    }

    else if(m==2){
        while(n>=i){
            printf("Dec Order:");
            printf("%d\n",n);
            n--;
        }
    }

    return 0;
}