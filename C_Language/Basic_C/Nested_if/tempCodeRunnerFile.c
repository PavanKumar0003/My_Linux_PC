#include <stdio.h>

int main()
{
    int m,p,c,totalMP,totalMPC;
    printf("Enter M,P,C marks:");
    scanf("%d%d%d",&m,&p,&c);

    if(m>=60){
        if(p>=50){
            if(c>=40)
            totalMPC= m+p+c;
        totalMP=m+p;
        }
    }

    if(totalMPC>=200){
        printf("Eligible");
    }
    else if(totalMP>=150){
            printf("Eligible");
        }

    else printf("Not eligible");

    return 0;
}