/*
12) void strrev( char str[]);
//reverse the string (without using any extra array)
eg., input : str[] = "Kernel";
output : str[] = "lenreK"
*/

#include<stdio.h>

int main(){
    char d[]="pavan";
    mystrrev(d);
    return 0;
}

void mystrrev(char d[]){
    int de=0;
    char temp=0;
    printf("name is :");
    for(int i=0;d[i];i++) de++;
    de--;
    for(int i=0;i<de/2;i++){
        temp=d[i];
        d[i]=d[de-i];
        d[de-i]=temp;
    }
    for(int i=0;d[i]!='\0';i++) printf("%c",d[i]);
}