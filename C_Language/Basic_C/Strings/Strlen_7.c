/*
7) int strlen( char str[]);
returns the length of the string.

Implementation:
//string length is the count of characters till the first null character is found in a string
int strlen_1(char str[])
{
int i;
for(i=0; str[i] != '\0'; i++); // count all characters till null character is found.
return i;  // return the count.
}*/


#include<stdio.h>

int main(){
    char str[]="Pavan";
    printf("Str length is:%d",mystrlen(str));
    return 0;
}

int mystrlen(char str[])
{
    int i;
    for(i=0; str[i] != '\0'; i++); 
    return i; 
}