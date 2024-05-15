#include<stdio.h>

int main(){
    int i=1,n,c=0;
    printf("enter mx num:");
    scanf("%d",&n);

    while(i<=n){
        if(n%i==0){
           c++;
        }
        i++;
    }
    if(c==2){
        printf("%d-is prime number",n);
    }
    else printf("%d-not a prime number",n);

    return 0;
}


// printf("%d-is prime number",i);