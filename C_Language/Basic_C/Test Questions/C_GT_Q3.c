#include<stdio.h>

int main(){
    char s[10]="12345";
    int count=0,R,C,x=0,i=0,c=0;
    //printf("enter string:");
    //scanf(" %s",s);
    //for(int i=0;s[i]!='\0';i++) count++;

    for(R=0; R<5; R++){
        for(C=5;C>R;C--) printf(" ");
        for(C=0;C<=R;C++){ 
            printf("%c",s[i]);
            if(R>0)i++;
        }
        --i;
        printf("\n");
    }
    return 0;

}