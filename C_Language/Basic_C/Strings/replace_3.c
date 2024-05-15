//3). Write a program to replace a given character by another character in a string.

#include<stdio.h>
void mystrrpl(char s[],char,char);

int main(){
    char s[]="KernalMasters";
    char wr='t',tr='T';
    mystrrpl(s,wr,tr);
    return 0;
}

void mystrrpl(char s[],char wr,char tr){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==wr) s[i]=tr;
    }
    printf("Result string:%s",s);
}