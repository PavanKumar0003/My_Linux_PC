/*
6) Write the calculator program with the functions distributed in 3 different files as shown below, 
compile and execute it. the main function should take inputs from user in a loop, as long as user wants to execute the calculator functionality.
main function in main.c 
add and subtract functions in add.c 
mul, div ,remainder functions in mul.c
*/

#include<stdio.h>
int a,b,n;
char c;
int add(int, int,char);
int mul(int, int,char);

int main(){
    printf("Enter ");
    while(1){
        printf("enter A,B: ");
        scanf("%d,%d",&a,&b);
        printf("enter Char: ");
        scanf(" %c",&c);
        if(c=='+' || c=='-') printf("%d\n",add(a,b,c));
        else if(c=='*' || c=='/' || c=='%') printf("%d\n",mul(a,b,c));
        else if(c=='q') break;
    }
    return 0;
}