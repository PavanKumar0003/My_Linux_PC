/*
9) void strcat( char d[] , char s[]);
concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
eg., char d[] = "Kernel";
char s[] = "Masters";
output: after concatenation d[] becomes " KernelMasters";
*/

#include<stdio.h>

int main(){
    char d[100],s[100];
    printf("Enter Name:");
    scanf("%s",&d);
    printf("Enter Name to add:");
    scanf("%s",&s);
    mystrcat(d,s);
    return 0;
}

void mystrcat(char d[],char s[]){
    int se=0,de=0;
    printf("Concat is:");
    for(int i=0;s[i]!='\0';i++) se++;
    for(int i=0;d[i]!='\0';i++) de++;
    for(int i=0; i<=se; i++) d[de+i]=s[i];
    /*for(int i=0;d[i]!='\0';i++)*/ printf("%s",d);
    return 0;
}