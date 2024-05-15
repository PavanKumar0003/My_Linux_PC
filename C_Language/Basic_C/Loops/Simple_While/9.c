#include<stdio.h>

int main()
{
    int n,i=1,d,m,y;
    printf(" Enter the Number of Students :");
    scanf("%d",&n);

    while(i<=n){
        printf("Enter Student%d DOB = ",i);
        scanf("%d-%d-%d",&d,&m,&y);

        if(m==1) printf("Date is :%d January %d \n ",d,y);
        if(m==2) printf("Date is :%d Febrauary %d \n ",d,y);
        if(m==3) printf("Date is :%d March %d \n ",d,y);
        if(m==4) printf("Date is :%d April %d \n ",d,y);
        if(m==5) printf("Date is :%d May %d \n ",d,y);
        if(m==6) printf("Date is :%d June %d \n ",d,y);
        if(m==7) printf("Date is :%d July %d \n ",d,y);
        if(m==8) printf("Date is :%d August %d \n ",d,y);
        if(m==9) printf("Date is :%d September %d \n ",d,y);
        if(m==10) printf("Date is :%d October %d \n ",d,y);
        if(m==11) printf("Date is :%d Novenmber %d \n ",d,y);
        if(m==12) printf("Date is :%d December %d \n ",d,y);
        
        if(y%100==0 && y%400==0 && y%4==0) printf("this student is born in a leap year\n ");
        else printf("Its not leap\n ");
        i++;
    }

    return 0;
}