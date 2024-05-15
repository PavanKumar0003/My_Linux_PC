#include<stdio.h>

int main(){
    int a=-52;
    unsigned int b=52;
    short int c=-762;
    unsigned short int d=745;
    long int e=753;
    unsigned long int f=957;
    char g;
    unsigned char h;
    float i=5.21;
    double j=352.2558;
    long double k=974.584;

   //SizeOf data type
    printf("Size of Datatypes::::\n");
    printf("int:%lu\n",sizeof(int));
    printf("unsigned:%lu\n",sizeof(unsigned int));
    printf("short:%lu\n",sizeof(short int));
    printf("unsigned short:%lu\n",sizeof(unsigned short int));
    printf("long int:%lu\n",sizeof(long int));
    printf("unsigned long int:%lu\n",sizeof(unsigned long int ));
    printf("float:%lu\n",sizeof(float));
    printf("char: %lu\n",sizeof(char));
    printf("unsigned char: %lu\n",sizeof(unsigned char));
    printf("double:%lu\n",sizeof(double));
    printf("long double:%lu\n",sizeof(long double));

    //SizeOf variabels;
    printf("Size of Variables::::\n");
    printf("int:%lu\n",sizeof(a));
    printf("unsigned:%lu\n",sizeof(b));
    printf("short:%lu\n",sizeof(c));
    printf("unsigned short:%lu\n",sizeof(d));
    printf("long int:%lu\n",sizeof(e));
    printf("unsigned long int:%lu\n",sizeof(f));
    printf("float:%lu\n",sizeof(g));
    printf("char: %lu\n",sizeof(h));
    printf("unsigned char: %lu\n",sizeof(i));
    printf("double:%lu\n",sizeof(j));
    printf("long double:%lu\n",sizeof(k));

    //SizeOf Constant;
    printf("Size of Constants::::\n");
    printf("int:%lu\n",sizeof(-585));
    printf("unsigned:%lu\n",sizeof(5412));
    printf("short:%lu\n",sizeof(-5721));
    printf("unsigned short:%lu\n",sizeof(452));
    printf("long int:%lu\n",sizeof(-64211));
    printf("unsigned long int:%lu\n",sizeof(54150));
    printf("float:%lu\n",sizeof(25.14554));
    printf("char: %lu\n",sizeof(g));
    printf("unsigned char: %lu\n",sizeof(g));
    printf("double:%lu\n",sizeof(-551411));
    printf("long double:%lu\n",sizeof(3524100));

    //Size of expression
    printf("Size of Expression::::\n");
    printf("int:%lu\n",sizeof(a+b));
    printf("unsigned:%lu\n",sizeof(b*k));
    printf("short:%lu\n",sizeof(b/i));
    printf("unsigned short:%lu\n",sizeof(a^b));
    printf("long int:%lu\n",sizeof(e-f));
    printf("unsigned long int:%lu\n",sizeof(a+b));
    printf("float:%lu\n",sizeof(a/e));
    printf("char: %lu\n",sizeof(k));
    printf("unsigned char: %lu\n",sizeof(k-i));
    printf("double:%lu\n",sizeof(j/a));
    printf("long double:%lu\n",sizeof(j*k));
}