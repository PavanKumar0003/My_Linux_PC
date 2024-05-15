/*
4). "Write a program to find the length of a string. Length is the number of characters in a string (null character is not counted).
eg., char name[10] = "abc"; //size of name is 10 bytes
            // length of name is 3"
*/
int mystrlen(char n[]);

#include<stdio.h>
int main(){
    char name[10] = "abc.abc";
    printf("Length = %d",mystrlen(name));
    return 0;
}

int mystrlen(char n[]){
    int c=0;
    for(int i=0;n[i];i++) c++;
    return c;
}