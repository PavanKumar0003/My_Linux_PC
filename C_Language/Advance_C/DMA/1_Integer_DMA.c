//1) create an integer dynamically ,read and print its value.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *var;
    var=(int *)malloc(sizeof(int));
    printf("enter Values:");
    scanf("%d",var);
    printf("value:%d",*var);
    free(var);
    return 0;
}