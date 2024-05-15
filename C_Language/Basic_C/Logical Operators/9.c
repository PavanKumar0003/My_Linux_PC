#include <stdio.h>
int main()
{
    char x;
    printf("Enter char:");
    scanf("%c", &x);

    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
        printf("OVEAL");
    }

    else{
        printf("Not oveal");
    }
    return 0;
}