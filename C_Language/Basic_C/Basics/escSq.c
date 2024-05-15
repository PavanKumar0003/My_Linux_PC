#include<stdio.h>
#include<math.h>

int main()
{
    int a,i;
    printf("Enter a number:");
    scanf("%d",&a);

    for(i=3;i>=0;i--){
        int x=pow(10,i);
        //int x=10^i;
        int b = a / x;
        printf("%d \n",b);
    }
    return 0;
}