/*
6) Write a function, that takes two strings as input and concatenates only the first n characters from 
   first string and first m characters from second string and makes a new string.
eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
output : kerraaya
*/

//9.strcat
#include<stdio.h>
#include<stdlib.h>

char *mystrcat(char *,char *,int,int);

int main(){
    int *pn,*pm;
    char *str1,*str2;
    pn=(int *)malloc(sizeof(int));
    pm=(int *)malloc(sizeof(int));
    str1=(char *)malloc(50*sizeof(char));
    str2=(char *)malloc(50*sizeof(char));

    printf("Enter String1:");
    scanf("%s",str1);
    printf("\nEnter String1:");
    scanf("%s",str2);
    printf("Enter n,m:");
    scanf("%d,%d",pn,pm);
    
    printf("\nstring:%s",mystrcat(str1,str2,*pn,*pm));

    free(pn);
    free(pm);
    free(str1);
    free(str2);
    return 0;
}
char *mystrcat(char *str1,char *str2,int n,int m){
    int s1=0,s2=0,i;
    static char *stTe1,*stTe2;

    stTe1=(char*)realloc(str1,(n+1)*sizeof(char));
    stTe2=(char*)realloc(str2,(m+1)*sizeof(char));
    *(stTe1+n)=0;
    *(stTe2+m)=0;
    printf("Str1 Realloc=%s\n",stTe1);
    printf("Strs Realloc=%s\n",stTe2);

    for(i=0;*(stTe1+i);i++) s1++;   //strlen str1
    for(i=0;*(stTe2+i);i++){
        *(stTe1+(s1+i))=*(stTe2+i);
     }
     *(stTe1+(s1+i))=0;
    printf("Strtotal Realloc=%s\n",stTe1);
    return stTe1;
}