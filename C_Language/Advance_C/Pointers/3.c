/*
3) declare different pointers with different data types. 
   Print the sizes of the pointer variables using sizeof operator.
   Also print the sizeof pointer variables with indirection operators. Observe the results.
*/

#include<stdio.h>

int main(){
    int a,*p=&a;
    char b,*q=&b;
    float c,*r=&c;
    double d,*s=&d;
    printf("int size=%d\n",sizeof(p));
    printf("char size=%d\n",sizeof(q));
    printf("float size=%d\n",sizeof(r));
    printf("double size=%d\n",sizeof(s));
    printf("****Pointer var using * ****\n");
    printf("int* size=%d\n",sizeof(*p));
    printf("char* size=%d\n",sizeof(*q));
    printf("float* size=%d\n",sizeof(*r));
    printf("double* size=%d\n",sizeof(*s));
    return 0;
}
