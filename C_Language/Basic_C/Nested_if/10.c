#include <stdio.h>
int main()
{
    int a0,a1,a2,a3,a4,a5;
    printf("Enter a0:");
    scanf("%d", &a0);
    if(a0%50==0){
        a1 = a0 / 2000;
        a0 = a0 % 2000;

        a2 = a0 / 1000;
        a0 = a0 % 1000;

        a3 = a0 / 500;
        a0 = a0 % 500;

        a4 = a0 / 200;
        a0 = a0 % 200;

        a5 = a0 / 50;
    }
    if(a1>0){
        printf("No of 2000 :%d \n",a1);
    }
    if(a2>0){
        printf("No of 1000 :%d \n",a2);
    }
    if(a3>0){
        printf("No of 500 :%d \n",a3);
    }
    if(a4>0){
        printf("No of 200 :%d \n",a4);
    }
    if(a5>0){
        printf("No of 50 :%d \n",a5);
    }
    return 0;
}