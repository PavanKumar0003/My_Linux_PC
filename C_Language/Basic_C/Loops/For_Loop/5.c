#include<stdio.h>

int main(){
    int x,n=0,i,a=0;
    printf("Enter NUmber: ");
    scanf("%d",&a);
    printf("Reverse is :");

    for(;i=1;i++){
        n=a%10;
        if(n==0) break;
        printf("%d",n);
        a/=10;
    }
    return 0;
}