//6.Write a function that takes an integer number as input and prints its multiplication table.return type is  void.

#include<stdio.h>

void mult(int );

int main(){
    int a=4;
    mult(a);
}

void mult(int a){
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }
    return 0;
}