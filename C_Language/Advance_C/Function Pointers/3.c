/*
3)"Write the calculator program using a function that accepts a function pointer and the operand values 
    as arguments and invokes it. In the main function, simply invoke this function by sending the appropriate
    function address, based on the operator chosen.
eg.,
in main
case '+' :invokeptr(add , x,y);

invokeptr(int (*fptr) (int,int) , int x, int y)
{
printf("%d\n",fptr(x,y));
}
*/

#include<stdio.h>
#include<string.h>

/*1. Function declarations*/
int add(int,int);
int sub(int,int);
int mul(int,int);
int mod(int,int);
int div(int,int);

int main(){
    int a=40,b=50;
    char ope;
    /*2. Function pointer declarations*/
    int (*fptr)(int,int);
    void invokeptr(int (*fptr) (int,int), int a, int b);    /*<- Function pointer declaration*/
    printf("ENter a,b:");
    scanf("%d,%d",&a,&b);
    printf("Enter Operator:");
    scanf(" %c",&ope);
    /*3.Case selection block*/
    switch(ope){
    case '+': invokeptr(add,a,b); break;
    case '-': invokeptr(sub,a,b); break;
    case '*': invokeptr(mul,a,b); break;
    case '%': invokeptr(mod,a,b); break;
    case '/': invokeptr(div,a,b); break;
    default:printf("*****Invalid operator*****");break;
    }
    
    return 0;
}
void invokeptr(int (*fptr) (int,int) , int x, int y){
    printf("%d\n",fptr(x,y));
}

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int mod(int a,int b){return a%b;}
int div(int a,int b){return a/b;}//printf("\n%f\n",(float)a/b); //0.8