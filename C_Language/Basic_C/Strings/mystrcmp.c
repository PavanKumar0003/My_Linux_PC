#include<stdio.h>
int mystrcmp(char s[],char k[]);
int main(){
    char s[]="Kernal";
    char k[]="l";
    if(mystrcmp(s,k)==1) printf("s[] is big");
    else if(mystrcmp(s,k)==-1) printf("k[] is big");
    else printf("Both strings are same");
    return 0;
}

int mystrcmp(char s[],char k[]){
    int se=0,ke=0;
    for(int i=0;s[i]!='\0';i++) se++;
    for(int i=0;k[i]!='\0';i++) ke++;
    if(se==ke){
        for(int i=0;s[i]!='\0';i++){
            if(s[i]>k[i]) return 1;
            else if (s[i]<k[i]) return -1;
            else return 0;
        }
    }
    else return -1;
}