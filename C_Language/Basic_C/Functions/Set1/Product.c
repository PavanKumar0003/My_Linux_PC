// 3.Write a function that takes two numbers a and b as input arguments and
// returns their product as return value , without using * operator.

#include<stdio.h>
int Power(int , int );  //function prototype.

int a=2,b=3;

int main(){
    int p=Power(a,b);
    printf("Power is : %d",p);
    return 0;
}

int Power(a,b){
    
    int z=0;
    for(int i=1;i<=b;i++)  z+=a;
    return z;
}