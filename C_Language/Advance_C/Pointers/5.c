//5.strlen

#include<stdio.h>
int main(){
    char name[10] = "abc";
    printf("Length = %d",mystrlen(name));
    return 0;
}

int mystrlen(char *n){
    int c=0;
    for(int i=0;*(n+i)!='\0';i++) c++;
    return c;
}