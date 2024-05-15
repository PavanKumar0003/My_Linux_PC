//1.Write a program with a function that takes two integer arguments,
//and prints all prime numbers between those numbers using the prime number function written previously. 

#include<stdio.h>
void prime(int ,int);
int a,b;
int main(){
    printf("Enter a,b:");
    scanf("%d,%d",&a,&b);
    prime(a,b);
    return 0;
}
void prime(a,b){
    int c,i;
    printf("prime numbers b/w %d,%d are :",a,b);
    for(;a<=b;a++){
        for(i=1,c=0;i<=a;i++){
            if(a%i==0) c++;
        }
        if(c==2) printf("%d,",a);
    }
    return 0;
}