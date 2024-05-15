// //AUTO keyword
// #include<stdio.h>
// int main(){
//     auto int i=10;
//     printf("entered number is:%d",i);
//     return 0;
// }

// //STATIC (global) keyword
// #include<stdio.h>
// static int x=20;
// int main(){
//      printf("Static(Global)value is :%d",x);
//      return 0;
// }

// //STATIC(local) keyword
// #include<stdio.h>
// int main(){
//     static int y=42;
//      printf("Static(local)value is :%d",y);
//      return 0;
// }

// //EXTERN keyword
// #include<stdio.h>
// extern int t=423;
// int main(){
//     printf("Extern value is :%d",t);
//     return 0;
// }

// //REGISTER keyword
// #include<stdio.h>
// int main(){
//     register int i=5269;
//     printf("register value is :%d",i);
//     return 0;
// }

/*.................ERRORS...........*/

// //AUTO keyword ERROR
// #include<stdio.h>
// auto int i=10;
// int main(){
//     printf("entered number is:%d",i);
//     return 0;
// }
// ERROR:
// auto.c:43:10: error: file-scope declaration of 'i' specifies 'auto'
// auto int i=10;
//          ^  

// //EXTERN keyword ERROR
// #include<stdio.h>
// int main(){
//     extern int t=423;
//     printf("Extern value is :%d",t);
//     return 0;
// }

// ERROR: auto.c: In function 'main':
// auto.c:56:16: error: 't' has both 'extern' and initializer
//      extern int t=423;
//                 ^

// //REGISTER keyword Error
// #include<stdio.h>
// register int i=5269;
// int main(){
//     printf("register value is :%d",i);
//     return 0;
// }
// Error: 
// auto.c:70:14: error: register name not specified for 'i'
//  register int i=5269;
//               ^

//STATIC(local) keyword
static int y=332;
#include<stdio.h>
int main(){
     fun1(y);
     return 0;
}