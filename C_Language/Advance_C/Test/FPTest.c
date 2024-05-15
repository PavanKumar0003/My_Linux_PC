#include<stdio.h>
#include<stdlib.h>

int add(int,int);
int (*fptr)(int,int)=add;                         // -> Function pointer
void callback(int(*fptr)(int,int),int*,int*);     // -> Call back function

int main(){
    int *p=(int*)malloc(sizeof(int)),*q=(int*)malloc(sizeof(int)); 
    printf("enter a,b:");
    scanf("%d,%d",p,q);
    callback(add,p,q);   //1.Sending add function address, p address, q address to call back funtion
    free(p);free(q);
    return 0;
}

void callback(int (*fptr)(int,int),int *a,int *b) { printf("add:%d",fptr(*a,*b)); }  //2,4
int add(int r,int s) { return r+s; }  //3.