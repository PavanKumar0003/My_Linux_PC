#include<stdio.h>
int mystrchr(char str[],char ch);

int main(){
    char str[]="pavan",ch='p';
    printf("char is at: [%d] index",mystrchr(str,ch));
    return 0;
}

int mystrchr(char str[],char ch){
    for(int i=0;str[i]!='\0';i++) if(str[i]==ch) return i;
}