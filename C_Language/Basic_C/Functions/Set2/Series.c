/*5)Write a program to calculate the sum of the below series upto n terms: 
    1/1! - 1/2! + 1 / 3! - 1/4! + 1/5! - 1/6! .. 1/n!
*/

#include<stdio.h>

void Factorial(int);
int n,c=0,i,j,z;
float x=0;

int main(){
    printf("Enter number limit:");
    scanf("%d",&n);
    Factorial(n);
    return 0;
}

void Factorial(n){
   printf("Factorial upto %d:",n);
    for(i=1;i<=n;i++){
        for(j=i,z=1;j>1;j--){
            z*=(float)j;
        }
        if(i%2==0) x-= 1.0/(float)z;
        else x+= 1.0/(float)z;
        printf("%f,",1/(float)z);
    }
    printf("Factorial:%f",x);
}