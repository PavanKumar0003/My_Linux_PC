#include<stdio.h>

int main(){
    char c;
    printf("Enter char:");
    scanf(" %c",&c);
    switch(1)
    {
    case 1: if(c>='a' && c<='z' || c>='A' && c<='Z') printf("ALPHABET");
            else printf("NOT ALPhABET"); 
            break;
    default: printf("NOT ALPhABET"); break;
    }
    return 0;
}