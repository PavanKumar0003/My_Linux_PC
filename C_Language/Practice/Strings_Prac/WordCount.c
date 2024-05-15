#include<stdio.h>
int word_Count(char *str);
int main()
{
    char str[]="Pava kumar is a good boy";
    printf("count:%d",word_Count(str));
    return 0;

}

int word_Count(char *str){
    int c=0;
    for(int i=0;str[i];i++){
        if(str[i-1]!=' ' && str[i]==' ' && str[i+1]!=' ') c++;
    }
    c++;
    return c;
}