#include<stdio.h>
static int y=0;
static char x[200];
int main(){
    char str[100];
    int c=0,i;
    printf("enter string:");
    scanf("%[^\n]s",str);
    mystrrev(str);
    printf("string is : %s",x);
}

///Whole sentence Reverse (step-1)
void mystrrev(char str[]){
    //printf("\nmystrrev fun enter:");
    int de=0;
    char temp;
    for(int i=0;str[i]!='\0';i++) de++;
    de--;
    for(int i=de;i>de/2;i--){
        temp=str[i];
        str[i]=str[de-i];
        str[de-i]=temp;
    }
    revwrd(str);
}

///Each word below space should reverse (step-2(1))
void revwrd(char str[]){
    //printf("\nrevwrd fun enter:");
    int k[20];
    for(int i=0;str[i]!='\0'; i++){
        if(str[i]==' ') wordrev(k);
        k[i]=str[i];
    }
}
///Each word below space should reverse (step-2(2))
void wordrev(char k[]){
    int de=0;
    char temp;
    //printf("\nWordrev fun enter:");
    for(int i=0;k[i]!='\0';i++) de++;
    de--;
    for(int i=de;i>de/2;i--){
        temp=k[i];
        k[i]=k[de-i];
        k[de-i]=temp;
    }
    for(int i=0;k[i]!='\0';k++){
        x[y]=k[i];
        y++;
    }
}