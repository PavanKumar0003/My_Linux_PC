#include <stdio.h>

int main()
{
    char ch;
    printf("Enter char:");
    scanf("%c",&ch);
    int cs,x=ch;

    switch (1)
    {
        case 65 ... 90: x=x-32;
                printf("%c",x);
                break;
        case 97 ... 122: x=x+32;
                printf("%c",x);
                break;
        default: printf("Not char");
    }
    return 0;
}