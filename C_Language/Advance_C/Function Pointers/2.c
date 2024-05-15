/*2)Rewrite the calculator program using an array of function pointers.
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
    int (*p[]) (int, int)={add,sub,mul,mod,div};    /*<- Function pointer declaration and initialzing function name(add) to pointer function*/
    printf("add=%d\n",p[0](a,b));
    //p[1]=sub;                      /*<- Initilizing pointer function with sub function*/
    printf("sub=%d\n",p[1](a,b));
   // p[2]=mul;
    printf("mul=%d\n",p[2](a,b));
    //p[3]=mod;
    printf("mod=%d\n",p[3](a,b));
    //p[3]=div;
    printf("div=%d\n",p[4](a,b));
    return 0;
}

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int mod(int a,int b){return a%b;}
int div(int a,int b){return a/b;} //printf("\n%f\n",(float)a/b); //0.8