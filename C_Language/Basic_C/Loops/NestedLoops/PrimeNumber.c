//Prime Numbers b/w 2 numbers

#include<stdio.h>

int main(){
    int i,n,c=0,a,b,j;
    printf("enter 2 nums:");
    scanf("%d,%d",&a,&b);
    printf("Prime numbers are:");

    for(;a<=b;a++){
        for(c=0,i=1; i<=a; i++){
            if(a%i==0) c++;
        }
        if(c==2) printf("%d ",a);
    }
    return 0;
}