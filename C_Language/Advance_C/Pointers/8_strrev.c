//8)strrev
#include<stdio.h>

char *mystrrev(char *);
int main(){
    char str[10];
    printf("Enter string:");
    scanf("%[^\n]s",str);
    printf("Strrev=%s", mystrrev(str));
    return 0;
}
char *mystrrev(char *str){
    char temp;
    int s=0;
    for(int i=0;*(str+i);i++) s++;
    s--;
    for(int i=s;i>s/2;i--){
        temp=*(str+i);
        *(str+i)=*(str+(s-i));
        *(str+(s-i))=temp;
    }
    return str;
}