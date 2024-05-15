//Fibanocii

#include<stdio.h>

int main(){
    int x=0,n,i,a;
    printf("Enter max iteration count: ");
    scanf("%d",&n);

    printf("Numbers are: ");
    printf(" %d  ",a);
    
    for(i=0;i<=n;i++){
        a=a+x;
        printf(" %d ",a);
        x=a-x;
    }
    return 0;
}