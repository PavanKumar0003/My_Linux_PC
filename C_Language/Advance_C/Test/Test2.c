#include<stdio.h>
int main(){
    int a[10],temp=0,c=0;
    printf("Enter arr:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("\nNubers are:");
    for(int i=0;i<10;i++){
        printf("%d,",a[i]);
    }

    printf("\nC:");
    for(int i=0;i<10;i++){
        if(a[i]<a[i+1]){
            ++c;
            printf("%d,",c);
        }
        else {
            if(temp<c){
                temp = c;
            }
            c=0;
        }
    }
    printf("\nBiggest:%d",temp+1);
    return 0;
}