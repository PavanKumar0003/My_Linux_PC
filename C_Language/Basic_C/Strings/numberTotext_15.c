/*
" WAP to display the word expansion of a number
eg., Input : 789
Output : Seven Eight Nine"*/

#include<stdio.h>

int main(){
    char s[]="798";
    int c;
    for(int i=0;s[i]!='\0';i++){
        c=s[i]-48;
        switch(c){
            case 0: printf(" Zero "); break;
            case 1: printf(" One ");break;
            case 2: printf(" Two ");break;
            case 3: printf(" Three ");break;
            case 4: printf(" Four ");break;
            case 5: printf(" Five ");break;
            case 6: printf(" Six ");break;
            case 7: printf(" Seven ");break;
            case 8: printf(" Eight ");break;
            case 9: printf(" Nine ");break;
        }
    }
    return 0;
}