//10)  void strlwr( char str[]);
// convert all upper case alphabets to lower case in the given string

#include<stdio.h>

int main(){
    char d[]="PAVAN";
    mystrlwr(d);
    return 0;
}

void mystrlwr(char d[]){
    for(int i=0;d[i]!='\0';i++){
        if(d[i]>=65 && d[i]<=90) d[i]+=32;
    }
    printf("Name is:");
    for(int i=0;d[i]!='\0';i++) printf("%c",d[i]);
}