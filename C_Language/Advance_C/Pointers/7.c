//7. strcmp

#include<stdio.h>
int mystrcmp(char s[],char k[]);
int main(){
    char s[20];
    char k[20];
    printf("Enter str1:");
    scanf("%s",s);
    printf("Enter str2:");
    scanf("%s",k);
    if(mystrcmp(s,k)==1) printf("str1 is big");
    else if(mystrcmp(s,k)==-1) printf("str2 is big");
    else printf("Both strings are same");
    return 0;
}

int mystrcmp(char *s,char *k){
    int se=0,ke=0;
    for(int i=0;*(s+i)!='\0';i++) se++;
    for(int i=0;*(k+i)!='\0';i++) ke++;
    for(int i=0;s[i]!='\0'||k[i]!='\0';i++){
        if(*(s+i)-*(k+i)>0) return 1;
        else if (*(s+i)-*(k+i)<0) return -1;
    }
    return 0;
}