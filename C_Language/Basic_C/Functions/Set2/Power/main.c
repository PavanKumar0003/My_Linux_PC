/*
Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n without using * operator.
Write all three functions in three different source code files.
*/

#include<stdio.h>
int power(int,int);
int add(int,int);

int a=0,b=0,n=0,x=0,j=0;

int main(){
    printf("Enter a,b:");
    scanf("%d,%d",&a,&b);
    printf("Result=%d",power(a,b));
    return 0;
}

// void Power(a,n){
//     x=a;
//     for(int i=1;i<n;i++){
//         for(j=1,z=0;j<=a;j++){
//             z+=x;
//         }x=z;
//     }
//     printf("power:%d",z);
// }