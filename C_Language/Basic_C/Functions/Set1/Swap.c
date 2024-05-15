//12) Write a function ,that can take two integers, swap their values and print their new values.
// return type should be void. function should print the values.

#include<stdio.h>
void Swap(int,int);

int main(){
    int a,b;
    printf("Enter a,b:");
    scanf("%d,%d",&a,&b);
    Swap(a,b);
    return 0;
}

void Swap(int a,int b){
    int x=a;
    a=b;
    b=x;
    printf("Swaped a=%d,b=%d",a,b);
    return 0;
}