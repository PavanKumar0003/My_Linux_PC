/*1)Write the calculator program using function pointers for add, sub, mul, div and mod functions,
     using a single function pointer.
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
    /*2. Function pointer declarations*/
    int (*p) (int, int)=add;    /*<- Function pointer declaration and initialzing function name(add) to pointer function*/
    printf("add=%d\n",p(a,b));
    p=sub;                      /*<- Initilizing pointer function with sub function*/
    printf("sub=%d\n",p(a,b));
    p=mul;
    printf("mul=%d\n",p(a,b));
    p=mod;
    printf("mod=%d\n",p(a,b));
    p=div;
    printf("%d\n",p(a,b));
    return 0;
}

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int mod(int a,int b){return a%b;}
int div(int a,int b){return a/b;}//printf("\n%f\n",(float)a/b); //0.8