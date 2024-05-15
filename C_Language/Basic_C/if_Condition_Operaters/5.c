#include <stdio.h>

int main()
{
    char a;
    printf("Enter char:");
    scanf("%c",&a);

    int b=(int)a;
    if(b>=65){
        if(b<=90){
            printf("its a character");
        }
    }
        
    if(b>=97){
        if(b<=122){
            printf("its a character");
        }
    }

    else 
    printf("its Not a Character");

    return 0;
}