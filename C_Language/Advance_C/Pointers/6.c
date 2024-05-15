//6) strcpy
#include<stdio.h>
#include<string.h>
char *mystrcpy(char *,char *);
int main(){
    char d[]="Pavan", s[]="marr";
    printf("%s",mystrcpy(d,s));
    return 0;
}

char *mystrcpy(char *d, char *s)
{
    printf("String copy is:");
    int i = 0;
    while(s[i] != '\0'){
        *(d+i) = *(s+i);
        i++;
    }
    *(d+i) = '\0';
   return d;
}