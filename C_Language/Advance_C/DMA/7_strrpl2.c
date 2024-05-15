/*
7)Write a function that takes a main string and two sub strings (need not be same length),
  and replace every occurrence of first substring with the second substring in main string and 
  return a new string as output.

eg., input : kernel  e   xxx
output: kxxxrnxxxl
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *mystrrpl(char *,char *,char *);


int main(){
    int *pn,*pm;
    char *mstr,*str1,*str2;
    mstr=(char *)malloc(50*sizeof(char));
    str1=(char *)malloc(50*sizeof(char));
    str2=(char *)malloc(50*sizeof(char));
    printf("Enter main String:");
    scanf(" %[^\n]s",mstr);
    printf("Enter SubString1:");
    scanf(" %[^\n]s",str1);
    printf("\nReplace String2:");
    scanf(" %[^\n]s",str2);
    
    printf("\nstring:%s",mystrrpl(mstr,str1,str2));
    free(mstr);
    free(str1);
    free(str2);
    return 0;
}
char *mystrrpl(char *mstr,char *str1,char *str2){
  char *temp = (char*)malloc(50*sizeof(char));
  while(NULL!=strstr(mstr,str1)){
    temp=strstr(mstr,str1);
    strcpy(temp2,temp);
    *(mstr+(temp-mstr))=0;    //null from the substring index
    strcat(mstr,str2);
    strcat(mstr,temp2+strlen(str1));
  }
  return mstr;
}

/*
#include<stdio.h>
#include<string.h>
char strrpl(char *mstr ,char *str1,char *str2);

int main()
{
    char mstr[]="Pavan is a good boy, good person, good manners";
    char str1[]="good";
    char str2[]="Bad";
    strrpl(mstr,str1,str2);
    return 0;

}

char strrpl(char *mstr ,char *str1,char *str2){
    char *temp;
    while(strstr(mstr,str1)!=NULL){     // Do this process until replacing all the given repalce words
        temp = strstr(mstr,str1);       // Copy base address of matched string ---> (good boy)
        *(mstr+(temp-mstr)) = 0;        // NUll string frmo matched string ---->(Pavan is 000000000)
        strcat(mstr,str2);              // Concat mstr and str2 ----> (Pavan is a bad)
        strcat(mstr,temp+strlen(str1)); // Concat mstr and temp(good boy) from index after str1
    }
    printf("\nString:%s",mstr);
}
*/