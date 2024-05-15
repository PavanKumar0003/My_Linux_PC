#include <stdio.h>

int main()
{
    char ch;
    printf("Enter char:");
    scanf("%c",&ch);

    int x=ch,c=0;

    if(x<=90){
        if(x>=65){
            x=x+32;
            printf("%c",x);
            c++;
        }
        else printf("Not char");
    }

     else if(x<=122){
        if(x>=97){
            x=x-32;
            printf("%c",x);
        }
    }
    return 0;
}

//ex: b=98;