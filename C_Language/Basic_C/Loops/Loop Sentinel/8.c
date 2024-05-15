// div by 10 with in range

#include<stdio.h>

int main()
{
    int n=0,i,j,a,b;
    
        printf("Enter 2 numbers:");
        scanf("%d,%d",&a,&b);

    i=a;
    printf("Numbers div by 10 is:");

    while(i<=b){

        if(i%10==0){
            printf("%d  ",i);
            n++;
        }
            i++;
    }
    printf(" \nTotal number of number:%d\n",n);
    
    return 0;
}