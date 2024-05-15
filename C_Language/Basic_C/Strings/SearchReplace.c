#include<stdio.h>
#include<string.h>


int main()
{
    int c=0,j,i;
    char str[]="pavan aer Kumar ar pavan kumar pavan kumar aer";
    char str2[]="pavan kumar";

    for(i=0;i<strlen(str);i++){
        for(j=0;j<strlen(str2);j++){
            if(str[i+j]!=str2[j]) break;
        }
        if(j==strlen(str2)) c++;
    }
    printf("no:%d",c);
}