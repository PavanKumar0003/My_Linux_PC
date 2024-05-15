//7.write a function that can take an integer as input and return 1 if the number is prime number,  return 0 if it is not prime and print appropriate output message in main according to output.
//return type is integer. function name IsPrime - returns int (0 or 1)

#include<stdio.h>

int isPrime(int );

int main(){
    int a=6;
    int y = isPrime(a);
    if(y) printf("IS prime number");
    else printf("Not prime number");
    return 0;
}

int isPrime(int a){
    int x,c=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
             c++;
             if(c==2)x=1;
        }
        else x=0;
    }
    return x;
}