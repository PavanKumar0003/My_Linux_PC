/*
4) "Write the calculator program using a function that accepts an array of function pointers and the operand 
    values and operator character as arguments and invokes appropriate function based on the character.
     In main function, simply invoke this function by sending the array and operator character and operands as 
     input.
eg.,
in main
case '+' :invokeptr( fparr, x,y, ch);

invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{
//based on ch value, choose which index to apply on fptr and invoke the function
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

    printf("ENter a,b:");
    scanf("%d,%d",&a,&b);
    printf("Enter Operator:");
    scanf(" %c",&ope);

    /*2. Function pointer declarations*/
    void invokeptr(int(*fptr[5])(int,int), int a, int b,char ope);    /*<- Function pointer declaration and initialzing function name(add) to pointer function*/
    int (*fptr[5])(int,int)={add,sub,mul,mod,div};

    /*3.Case selection block*/
    switch(ope){
    case '+': invokeptr(fptr,a,b,ope); break;
    case '-': invokeptr(fptr,a,b,ope); break;
    case '*': invokeptr(fptr,a,b,ope); break;
    case '%': invokeptr(fptr,a,b,ope); break;
    case '/': invokeptr(fptr,a,b,ope); break;
    default:printf("*****Invalid operator*****");break;
    }
    return 0;
}
void invokeptr(int (*fptr[5]) (int,int) , int x, int y,char ch){
    if(ch=='+') printf("%d\n",fptr[0](x,y));
    if(ch=='-') printf("%d\n",fptr[1](x,y));
    if(ch=='*') printf("%d\n",fptr[2](x,y));
    if(ch=='%') printf("%d\n",fptr[3](x,y));
    if(ch=='/') printf("%d\n",fptr[4](x,y));
}

int add(int a,int b) {return a+b;}
int sub(int a,int b) {return a-b;}
int mul(int a,int b) {return a*b;}
int mod(int a,int b) {return a%b;}
int div(int a,int b) {return a/b;} //printf("\n%f\n",(float)a/b); //0.8