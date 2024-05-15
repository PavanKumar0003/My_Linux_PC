#include <stdio.h>

int main()
{
    char c;
    printf("Enter char:");
    scanf(" %c",&c);

    switch (c)
    {
    case 'a': printf("Ovel");break;
    case 'e': printf("Ovel");break;
    case 'i': printf("Ovel");break;
    case 'o': printf("Ovel");break;
    case 'u': printf("Ovel");break;
    case 'A': printf("Ovel");break;
    case 'E': printf("Ovel");break;
    case 'I': printf("Ovel");break;
    case 'O': printf("Ovel");break;
    case 'U': printf("Ovel");break;
    default: printf("Not a Ovel");break;
    }
}