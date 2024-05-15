#include<stdio.h>
#include<string.h>
char strrpl(char *mstr ,char *str1,char *str2);

int main()
{
    char mstr[]="sam is a good girl, good person, good manners";
    char str1[]="good";
    char str2[]="Bad";
    strrpl(mstr,str1,str2);
    return 0;
}

char strrpl(char *mstr ,char *str1,char *str2){
    char *temp;

    while(strstr(mstr,str1)!=NULL){     // Do this process until replacing all the given repalce words
        temp = strstr(mstr,str1);       // Copy base address of matched string ---> (good boy, good person, good manners)
        *(mstr+(temp-mstr)) = 0;        // NUll string from matched string ---->(Pavan is 000000000)
        strcat(mstr,str2);              // Concat mstr and str2 ----> (Pavan is a bad)
        strcat(mstr,temp+strlen(str1)); // Concat mstr and temp(good boy) from index after str1
    }
    printf("\nString:%s",mstr);
}