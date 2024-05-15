//2) Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n

#include<stdio.h>
int Power(int , int );  //function prototype.

int a=2,b=6;

int main(){
    int p=Power(a,b);
    printf("Power is : %d",p);
    return 0;
}

int Power(a,b){
    int z=1;
    for(int i=1;i<=b;i++)  z*=a; 
    return z;
}