/*
5). "Write a program to convert a string into upper case and print.
eg., input : Hello
output : HELLO"
*/

#include<stdio.h>

int main(){
    char d[]="hello";
    mystrupr(d);
    return 0;
}

void mystrupr(char d[]){
    for(int i=0;d[i]!='\0';i++){
        if(d[i]>=97 && d[i]<=122) d[i]-=32;
    }
    printf("Name is:%s",d);
}