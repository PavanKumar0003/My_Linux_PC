/*
2.Write the following program :
Declare a character array without size.
Initialize the array with characters of your name.
Print your name using for loop.
*/
#include<stdio.h>

int main(){
    char a[]={'p','a','v','a','n'};   //array a with no size
    for(int i=0; i<5; i++){
        printf("%c",a[i]);
    }
    return 0;
}
