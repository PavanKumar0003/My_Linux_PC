#include<stdio.h>

int main()
{
    int n,i=1,a,b,c,d,e,f,p;
    printf(" Enter the Number of Students :");
    scanf("%d",&n);

    while(i<=n){
        printf("Enter SUBJECT Marks for Student_%d = ",i);
        scanf("%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f);
        p= (a+b+c+d+e+f)/6;

        if(p>=80 && p<=100) printf("Sudent_%d has Honors\n",i);
        else if (p>=60 && p<80) printf("Sudent_%d has 1st\n",i);
        else if(p>=50 && p<60) printf("Sudent_%d has 2nd\n",i);
        else printf("Sudent_%d FAIL",i);
        i++;
    }

    return 0;
}