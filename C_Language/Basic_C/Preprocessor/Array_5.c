//5) Define a generic function, for different types of array printing,by taking array and array size as arguments.

#include<stdio.h>

#define PRTF(i) printf("%d,",i);  
void fun(int a[],int);

int main(){
    int size =5;
    int a[]={2,5,3,1,0};
    fun(a,size);
    return 0;
}

void fun(int a[],int size){
    printf("a[]:");
    for(int i=0;i<size;i++) PRTF(a[i]);
}