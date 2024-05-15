/*
4) Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using 
the same variable and calls the function again.

eg., print the square of each number of an array :
for each number of the array :
    call the function
    main gets the static variable address as return value from function.
    main puts the array element in static variable.
in the function :
    create static variable.
    if static variable value is not zero, print its square.
    function sends static variable address back to main.
*/
int *square();
#include<stdio.h>
#include<string.h>
int main(){
    int arr[5];
    int len=sizeof(arr)/4;
    printf("enter variables:");
    for(int i=0;i<len;i++) scanf("%d",arr+i);
    for(int i=0;i<len;i++){
        *square() =*(arr+i);
        printf("%d,",*square());
    }
}

int *square(){
    static variable;
    if(variable!=0){
        variable=variable*variable;
    }
    return &variable;
}