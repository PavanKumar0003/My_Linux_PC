//2)  Write down a macro to find the biggest of four numbers using biggest of 2 macro.

#include<stdio.h>

static int a=10,b=2,c=50,d=5;
#define Big2() func()

#if()
#endif

int main(){
    Big2;
    return 0;
}

int Big2{
    if(a>b && a>c && a>d) printf("A is big");
    else if(b>a && b>c && b>d) printf("B is big");
    else if(c>a && c>b && c>d) printf("C is big");
    else printf("D is big");
}