//3) Write a factorial function that takes a number as input and returns its factorial as output.

#include<stdio.h>

void Factorial(int);
int n,c=0,x=0,i,j,z;

int main(){
    printf("Enter n:");
    scanf("%d",&n);
    Factorial(n);
    return 0;
}

void Factorial(n){
    for(i=n,z=1;i>1;i--) z*=i;
    printf("Factorial:%d",z);
}