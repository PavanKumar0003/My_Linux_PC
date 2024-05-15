//4) Write a factorial function that calculates factorial without using * operator

#include<stdio.h>

int Factorial(int);
int n,x=0,i,j;

int Factorial(n){
    int z=0;x=n;
    for(i=n;i>1;i--){
        for( j=1,z=0;j<i;j++) z+=x;
        x=z;
    }
    return z;
}

int main(){
    printf("Enter n:");
    scanf("%d",&n);
    printf("Factorial:%d",Factorial(n));
    return 0;
}