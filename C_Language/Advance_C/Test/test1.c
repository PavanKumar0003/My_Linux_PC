#include<stdio.h>
#include<string.h>
int main(){
    int a[5],b[5];
    int j,size=5;
    static int temp;
    printf("Enter arr:");
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    printf("Temp:");
    for(int i=0;i<size;i++){
        temp=1;
        //printf("\ni=%d ",i);
        for(j=0,temp=1;j<size;j++){
            if(i!=j){
                temp=temp*a[j];
                
            }
        }printf("%d,",temp);b[i]=temp;
    }
    printf("\narray:");
    for(int i=0;i<5;i++) printf("%d,",b[i]);
    return 0;
}