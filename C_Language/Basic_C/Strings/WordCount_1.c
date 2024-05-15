/*
1). Take a string as an input, and count the number of words in the string. 
Take space, comma,exclamation, question mark and fullstop as delimitters for word counting.
*/

#include<stdio.h>
#include<string.h>

void wordCount(char s[]);

int main(){
    char s[]="pavan Kumar is a goodboy pp pavan";
    //printf("Word Count is=%d",strlen(s));
    wordCount(s);
    return 0;
}

void wordCount(char s[]){
    int c=0;
    for(int i=0;s[i]!='\0';i++){
        if((s[i-1] !=0 && s[i-1]!=' ') && s[i]==' ' && (s[i+1] !=0 && s[i+1]!=' ')) c++;      
    }
    printf("Number of words: %d",c+1);
}