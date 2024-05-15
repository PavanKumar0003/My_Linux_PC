/*
2). Write a program that reads a string as input, and determines whether the string is a palindrome or not.
*/

#include<stdio.h>

int palind(char s[]);

int main(){
    char s[100];
    printf("enter a Name:");
    scanf("%s",&s);
    if(palind(s)==1) printf("It is palindrome");
    else printf("It is not palindrome");
    return 0;
}

int palind(char s[]){
    int x=0,c=0;
    for(int i=0;s[i]!='\0';i++) x++;
    for(int i=0;i<=x/2;i++){
        if(s[i]==s[(x-1)-i]) c++;
    }
    if(c>=2) return 1;
    else return 0;
}