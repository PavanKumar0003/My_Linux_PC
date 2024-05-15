#include<stdio.h>
int sqr(int);
int main(){
    int a=4;
    printf("Sqr=%d",sqr(a));
    return 0;
}

int sqr(int a){
    return a*a;
}