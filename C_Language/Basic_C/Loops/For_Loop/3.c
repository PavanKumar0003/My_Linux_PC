#include<stdio.h>

int main(){
    int x=0,y,n,i,a;
    printf("Enter max iteration count: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        printf("enter number:");
        scanf("%d",&a);
        if(a>x){
            x=a;
        }

        if(a<y){
            y=a;
        }
    }
    printf("%d is big\n",x);
    printf("%d is small\n",y);

    return 0;
}