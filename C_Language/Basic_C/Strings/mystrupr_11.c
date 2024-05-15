//11)  void strupr( char str[]);
// convert all lower case alphabets to upper case in the given string

#include<stdio.h>

int main(){
    char d[]="pav
    an";
    mystrupr(d);
    return 0;
}

void mystrupr(char d[]){
    for(int i=0;d[i]!='\0';i++){
        if(d[i]>=97 && d[i]<=122) d[i]-=32;
    }
    printf("Name is:");
    for(int i=0;d[i]!='\0';i++) printf("%c",d[i]);
}