//2) Write two source files, main.c and swap.c. The main function initializes a two-element array of ints,
// and then calls the swap function to swap the pair.

#include<stdio.h>
void swap(int *);
int main(){
    int arr[2]={1,2};
    swap(arr);
    printf("%d,",*arr);
    printf("%d",*(arr+1));
    return 0;
}