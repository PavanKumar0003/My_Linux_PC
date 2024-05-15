#include<stdio.h>
void sqr(int *p);
int main(){
    int a=4;
    sqr(&a);
    printf("Sqr=%d",a);
    return 0;
}

void sqr(int *p){
    *p *= *p;
    return ;
}