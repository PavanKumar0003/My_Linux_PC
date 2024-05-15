/*
6. Write a function to search for a specific element given by the user, in an array and display its index. 
  Function takes array and element to search as inputs, and returns the index as output. 
  If element not found, return -1.
*/

#include<stdio.h>
//int fun(int ,int ); //arrfun(array variable, array size)
int main(){
    int a[]={1,4,2,6,8,9},x,size=0;
    printf("Enter search element:");
    scanf("%d",&x);
    if(arrfun(a,size,x)>=0)
        printf("Element found at %d index",arrfun(a,size,x));
    else printf("Element Not found");
    return 0;
}

int arrfun(int a[],int size,int x){   //arrfun(array variable, array size)
    size=6;int c=0;
    for(int i=0; i<size; i++) if(x==a[i]) return i;
    return -1;
}