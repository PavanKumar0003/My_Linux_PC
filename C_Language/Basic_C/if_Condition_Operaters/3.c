#include <stdio.h>
int main(){
    int a;
    printf("Enter Number: ");
    scanf("%d",&a);

    if(!(a%2)){
        printf("Even Numer");
    }
    else
    printf("Odd number");
    return 0;
}