/*
12) Write a program to replace a given character by another character in a string.
*/
#include<stdio.h>
void strreplace(char *,char ,char );
int main(){
    char arr[20];
    char repChar,pos;
    printf("enter string:");
    scanf("%[^\n]s",arr);
    printf("enter postion,character:");
    scanf(" %c%*c%c",&pos,&repChar);
    strreplace(arr,pos,repChar);
    printf("After Replace:%s\n",arr);
    return 0;
}

void strreplace(char *str,char pos,char repChar){
    printf("entered\n");
    for(int i=0;str[i];i++){
        if(str[i]==pos) *(str+i)=repChar;
    }
}
