#include<stdio.h>
void strLower(char *st);
void strUpper(char *st);

int main()
{
    char st[]="PAVAN KUMAR";
    strLower(st);
    printf("%s\n",st);
    strUpper(st);
    printf("%s",st);
    return 0;
}

void strLower(char *st){
    for(int i=0;st[i]!='\0';i++){
        if(st[i]>=65 && st[i]<=90) st[i]+=32;
    }
}

void strUpper(char *st){
    for(int i=0;st[i]!='\0';i++){
        if(st[i]>=97 && st[i]<=122) st[i]-=32;
    }
}