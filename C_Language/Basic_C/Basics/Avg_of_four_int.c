/* calculate average of 4 integer numbers and print the output.*/
#include<stdio.h>

int main()
{
    int a,b,c,d;
    float Avg;
    printf("ENter 4 numbers:");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    Avg=(a+b+c+d)/4;
    printf("avg is = %f", Avg);
    return 0;
}