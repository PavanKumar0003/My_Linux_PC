//1) Declare an integer array of size 10 and initialize it to some values.
// Print the addresses of each element of the array using a pointer. using indirection operator ,
// print the value stored in each element of the array.

#include<stdio.h>

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int *p=arr;
    for(int i=0;i<10;i++){
        printf("Add[%d]=%p",i,p+i);
        printf(" Value[%d]=%d\n",i,*(p+i));
    }
    return 0;
}