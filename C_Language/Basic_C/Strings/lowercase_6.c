
/*
6). "Write a program to convert a string into lower case and print.
eg., input : Hello
output : hello"
*/

#include<stdio.h>
void mystrlwr(char d[]);
int main(){
    char d[]="PAVAN";
    mystrlwr(d);
    return 0;
}

void mystrlwr(char d[]){
    for(int i=0;d[i]!='\0';i++){
        if(d[i]>=65 && d[i]<=90) d[i]+=32;
    }
    printf("Name is:%s",d);
}