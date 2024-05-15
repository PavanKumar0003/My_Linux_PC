//9.strcat
#include<stdio.h>
char *mystrcat(char *,char *);
int main(){
    char str1[]="Pavan\0",str2[]="Kumar\0";
    printf("\nstring:%s",mystrcat(str1,str2));
    return 0;
}
char *mystrcat(char *str1,char *str2){
    int s=0,i;
    for( i=0;*(str1+i);i++) s++;  //strlen
    for( i=0;*(str2+i);i++){
        *(str1+(s+i))=*(str2+i);
    }
    return str1;
}