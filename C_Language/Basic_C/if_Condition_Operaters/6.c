#include <stdio.h>

int main()
{
    int n;
    printf("Enter num:");
    scanf("%d",&n);
    if(n>0){
        printf("number is:%d",+n);
    }
    else{
        printf("number is:%d",-n);
    }
    return 0;
}