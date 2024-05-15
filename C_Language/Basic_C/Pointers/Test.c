#include<stdio.h>

int main(){
    int x=10;
    int *p=&x;
    printf("address:%p",p);
    printf("\nValue:%d",*p);
    printf("\nSize x:%d",sizeof(x));
    printf("\nSize pointer:%d",sizeof(*p));
    return 0;
}