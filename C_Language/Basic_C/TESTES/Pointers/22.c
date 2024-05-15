#include<stdio.h>
int fun();
// int main(){
//     int *p;
//     double *a;
//     if(sizeof(p)==sizeof(a)){
//         printf("same");
//     }
//     else printf("not same");
//     return 0;
// }

//21
// int main(){
//     int arr[10]={1,2,3,4,5};
//     int *p=&arr[2];
//     ++(*p);
//     printf("%d",arr[2]++);
//     return 0;
// }

// int main(){
//     int x=5,*p=&x;
//     printf("%d",*p);
//     return 0;
// }
int main(){
    // int x;
    // char *p=&x;
    // printf("%d",sizeof(p));
   // void fun();
    //printf("a");
    if(fun()) printf("ONCE");
    if(fun()) printf("twice");
    if(fun()) printf("threic");
    return 0;
}

int fun(){
    printf("func call");
    return 1;
}