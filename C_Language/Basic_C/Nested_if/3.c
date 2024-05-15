#include <stdio.h>
int main()
{
    int x;
    printf("Enter number:");
    scanf("%d", &x);
    if(x>0){
        printf("IS POsitive");
    }
    else if(x<0){
        printf("Is Negative");
    }
    else 
    printf("zero");
    return 0;
}