#include<stdio.h>

int main(){
    int R,C,n;
    printf("enter N:");
    scanf("%d",&n);

    for(R=n;R >=1;R--){
        for(C=n; C>=1; C--){
            // do{
            //     printf("%d",n);
            // }while(R>=(n+1)-R);
            if(C>R) printf("%d",C);
            else printf("%d",R);
        }
        printf("\n");
    }

    return 0;
}