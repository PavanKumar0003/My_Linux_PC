/*
4 Write a function that can take two integers as input, and 
gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. 
Print the outputs in the main function.*/

// #include<stdio.h>

// int main(){
//     int a,b,add,sub,mul,diR,diQ;
//     printf("Enter a,b:");
//     scanf("%d,%d",&a,&b);
//     calculator(a,b,&add,&sub,&mul,&diR,&diQ);
//     printf("Add:%d",add);
//     printf("\nSub:%d",sub);
//     printf("\nMul:%d",mul);
//     printf("\nDiv(R):%d",diR);
//     printf("\nDiv(Q):%d",diQ);
//     return 0;
// }

// void calculator(int a,int b,int *add,int *sub,int *mul,int *diR,int *diQ){
//     *add=a+b;
//     *sub=a-b;
//     *mul=a*b;
//     *diR=a/b;
//     *diQ=a%b;
// }

// //Using array
// #include<stdio.h>
// void calculator(int,int,int a[]);
// int main(){
//     int a,b,cal[5];
//     printf("Enter a,b:");
//     scanf("%d,%d",&a,&b);
//     calculator(a,b,cal);
//         printf("Add:%d",cal[0]);
//         printf("\nSub:%d",cal[1]);
//         printf("\nMul:%d",cal[2]);
//         printf("\nDiv(R):%d",cal[3]);
//         printf("\nDiv(Q):%d",cal[4]);
//     return 0;
// }

// void calculator(int a,int b,int cal[]){
//     cal[0]=a+b;
//     cal[1]=a-b;
//     cal[2]=a*b;
//     cal[3]=a/b;
//     cal[4]=a%b;
// }

//Using storage class
#include<stdio.h>
void calculator(int,int);

int *add,*mul,*sub,*diR,*diQ;
int main(){
    int a,b,addd,mull,subb,diRR,diQQ;
    add=&addd; mul=&mull; sub=&subb; diR=&diRR; diQ=&diQQ;
    printf("Enter a,b:");
    scanf("%d,%d",&a,&b);
    calculator(a,b);
        printf("Add:%d",*add);
        printf("\nSub:%d",*mul);
        printf("\nMul:%d",*sub);
        printf("\nDiv(R):%d",*diR);
        printf("\nDiv(Q):%d",*diQ);
    return 0;
}

void calculator(int a,int b){
    *add=a+b;
    *mul=a-b;
    *sub=a*b;
    *diR=a/b;
    *diQ=a%b;
}