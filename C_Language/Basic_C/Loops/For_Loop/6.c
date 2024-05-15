#include<stdio.h>

int main(){
    int x,n=0,i,a=0,c=0;
    printf("Enter NUmber: ");
    scanf("%d",&a);

    for(;i=1;i++){
        if(n=a%10) c++;
        if(n==0) {c++;break;}
        a/=10;
    }
    printf("Count: %d",c);
    return 0;
}