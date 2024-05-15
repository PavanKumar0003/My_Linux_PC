#include <stdio.h>

int main()
{
    char a;
    printf("Enter ALphabet:");
    scanf("%c",&a);

    int b=(int)a;
    if(b<=90){
        if(b>=65){
            printf("its a ALphabet");
        }
        else 
        printf("not alphabet");
    }
        
   else if(b<=122){
        if(b>=97){
            printf("its a Alphabet");
        }
    }

    else 
    printf("its Not a ALphabet");

    return 0;
}