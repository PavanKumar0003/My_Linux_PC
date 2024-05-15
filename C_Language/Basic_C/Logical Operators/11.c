#include <stdio.h>

int main()
{
    char ch;
    printf("Enter char:");
    scanf("%c",&ch);

    int x=ch,c=0;

    if(x<=90 && x>=65){
        x=x+32;
        printf("%c",x);
    }

     else if(x<=122 && x>=97){
        x=x-32;
        printf("%c",x);
    }
    else printf("Not char");
    
    return 0;
}

//ex: b=98;