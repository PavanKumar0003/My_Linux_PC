#include <stdio.h>

int main()
{
    char a;
    printf("Enter ALphabet:");
    scanf("%c",&a);

    int b=(int)a;
    if(b<=90 && b>=65 || b<=122 && b>=97){
            printf("its a Alphabet");
        }

    else 
      printf("its Not a ALphabet");

    return 0;
}