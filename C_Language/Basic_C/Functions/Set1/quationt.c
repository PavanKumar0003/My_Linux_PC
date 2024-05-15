//4.Write a function that takes two numbers a and b, and returns the quotient after dividing a with b.

#include<stdio.h>

float divd(int ,int);

int main(){
    int a=4,b=3;
    float d = divd(a,b);
    printf("%f",d);
}

float divd(int a,int b){
    return a/b;
}