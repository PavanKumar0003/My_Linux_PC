//3)  WAP to print if  a character is alphanumeric or special character, using macro conditions

#include<stdio.h>
static char c;
#define ALPHANUMERIC c>=48&&c<=57 || c>=65&&c<=90 || c>=97&&c<=122

int main(){
    printf("Enter char:");
    scanf(" %c",&c);
    if(ALPHANUMERIC) printf("It is alpanumeric");
    else printf("It is not alpanumeric"); 
    return 0;
}