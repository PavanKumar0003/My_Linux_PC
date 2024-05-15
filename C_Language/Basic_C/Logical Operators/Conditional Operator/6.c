#include <stdio.h>

int main()
{
    char ch;
    printf("Enter char:");
    scanf("%c",&ch);
    int x=ch,c=0;
    x<=90 && x>=65 ? printf("%c",x+32) : (x<=122 && x>=97 ?  printf("%c",x-32) : printf("Not char")) ;
    return 0;
}