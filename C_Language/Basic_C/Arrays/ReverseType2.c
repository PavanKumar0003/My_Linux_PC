/*
8.Write a program to reverse an array and print it (Reverse the array by swapping both edges of the array and move inside and repeat till middle of the array):  
Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1};
*/
#include<stdio.h>
//int arrfun(int,int);
int main(){
    int a[]={1,4,2,6,8,9},size=6;
    arrfun(a,size);
    return 0;
}

int arrfun(int a[],int size){   //arrfun(array variable, array size)
  printf("reverse:");
  for(int i=0; i<size/2; i++){
    int x=a[i];
    a[i]=a[5-i];
    a[5-i]=x;
  }
  
  for(int i=0; i<size; i++) printf("%d,",a[i]);
}