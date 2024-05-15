#include<stdio.h>
#define SZOF(a) ((int)(&a+1) - (int)&a)
int main(){
    double a;
    printf("Size=%d\n",SZOF(a));
    return 0;
}