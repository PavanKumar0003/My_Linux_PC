/*9.Declare an integer array of size 10 and initialize it to some values. 
Print the addresses of each element of the array using a pointer. 
using indirection operator , print the value stored in each element of the array.
*/

#include<stdio.h>

int main(){
    int a[10]={22,44,66,11,88,44,32,65,24,10},*p;
    for(int i=0;i<=9;i++){
        p=&a[i];
        printf("Value of a[%d]:%d",i,*p);
        printf("\tAdd of a[%d]:%p\n",i,p);
    }
    return 0;
}