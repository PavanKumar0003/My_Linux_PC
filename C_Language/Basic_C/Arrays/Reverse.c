//7.Write a program to print an array in reverse order.
#include<stdio.h>

//int arrfun(int ,int); //arrfun(array variable, array size)

int main(){
    int a[]={1,4,2,6,8,9},size;
    arrfun(a,size);
    return 0;
}

int arrfun(int a[],int size){   //arrfun(array variable, array size)
  size=5;
  printf("reverse:");
  for(int i=size; i>=0; i--) printf("%d,",a[i]);
}