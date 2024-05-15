/*
9) Write a calculator program with 5 functions below to do the operations of addition, subtraction, multiplication, division for quotient and division for remainder.
1) int add (int a, int b) // to be called when user chooses +
2) int sub (int a,int b) // to be called when user chooses -
3) int mul(int a, int b) // to be called when user chooses *
4) int quotient(int a, int b) // to be called when user chooses /
5) int remainder(int a,int b) // to be called when user choose%

*/

#include<stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
int quo(int,int);
int remi(int,int);

int a,b,c;

int main(){

    printf("enter number:");
    scanf("%d,%d",&a,&b);
    printf("Enter Operetions type:");
    scanf(" %c",&c);

    if(c=='+') printf("add=%d",add(a,b));
    else if(c=='-') printf("sud=%d",sub(a,b));
    else if(c=='*') printf("Mul=%d",mul(a,b));
    else if(c=='%') printf("quo=%d",quo(a,b));
    else if(c=='/') printf("rem=%d",remi(a,b));
    else printf("invalid");
    return 0;
}

int add(a, b){
    return a+b;
}

int sub(a, b){
    return a-b;
}

int mul(a,b){
    return a*b;
}
int quo(a,b){
    return a%b;
}
int remi(a,b){
    return a/b;
}