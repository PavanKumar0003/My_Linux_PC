/*
8) void strcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).

Implementation:

void strcpy_1( char d[], char s[])
{
int i = 0;
while( s[i] != '\0')
{
d[i] = s[i];
i++;
}
d[i] = '\0';
}
*/


#include<stdio.h>

int main(){
    char d[]="Pavan", s[]="kumar";
    mystrcpy(d,s);
    return 0;
}

void mystrcpy( char d[], char s[])
{
    printf("String copy is:");
    int i = 0;
    while( s[i] != '\0'){
        d[i] = s[i];
        printf("%c",d[i]);
        i++;
    }
    d[i] = '\0';
}