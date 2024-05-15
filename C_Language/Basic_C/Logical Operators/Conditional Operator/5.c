#include <stdio.h>

int main()
{
    char a;
    printf("Enter char:");
    scanf("%c",&a);

    a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U' ? printf("OVEAL") : printf("NOT OVEAL");

    return 0;
}