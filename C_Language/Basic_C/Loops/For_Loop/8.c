#include<stdio.h>

int main(){
    int i=1,n,c=0;
    printf("enter mx num:");
    scanf("%d",&n);

    do{
        if(n%i==0){
           c++;
        }
        i++;
    } while(i<=n);

    if(c==2) printf("%d-is prime number",n);
    else printf("%d-not a prime number",n);

    return 0;
}


// printf("%d-is prime number",i);