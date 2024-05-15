#include<stdio.h>

int main()
{
    int n,i=1,j=1,m,sumStd;
    float AvgTot,AvgStd,sumTot;

    printf("Enter No of Students:");
    scanf("%d",&n);
    while(i<=n){
        while(j<=6){
            printf("enter student_%d,Sub_%d: ",i,j);
            scanf("%d",&m);
            sumStd += m;
            AvgStd=(float)sumStd/6.0;
            j++;
        }
        
        j=1;
        sumTot += AvgStd;
        AvgTot = sumTot/i;
        m=0; sumStd=0; AvgStd=0;
        i++;
    }

    printf(" Class Total AVG = %f",AvgTot);
    return 0;
}