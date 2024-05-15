/*
6 declare different pointers with different data types.
Print the sizes of the pointer variables using sizeof operator. 
Why do u think all of them are giving same size irrespective of the data type ?
*/

#include<stdio.h>

int main(){
    int *p;
    char *q;
    float *r;
    double *s;
    printf("int:%d",sizeof(p)); printf(" add int:%p",p);
    printf("\nchar:%d",sizeof(q)); printf(" add char:%p",q);
    printf("\nfloat:%d",sizeof(r)); printf(" add float:%p",r);
    printf("\ndouble:%d",sizeof(s)); printf(" add double:%p",s);
    return 0;
}

//Output: All ptr variables have same size.