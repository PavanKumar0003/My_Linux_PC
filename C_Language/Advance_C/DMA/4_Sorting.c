/*
4) Create a dynamic array of integers. Take input from user , sort the array and display the output.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int *arr,size,temp=0;
    int s;
    printf("Enter Size:");
    scanf("%d",&size);
    arr=(int *)malloc(size*sizeof(int));
    //Scaning
    for(int i=0;i<size;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",arr+i);
    }
    printf("Before sorting:");
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
    s=size;
    //Sorting
    for(int i=0;i<size;i++){
        for(int j=0;j<s-1;j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        s--;
    }
    printf("\n");
    printf("After sorting:");
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
    free(arr);
    return 0;
}