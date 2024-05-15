// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int i=145,j=180,k=65,l=90;
//     printf("i=%d j=%d k=%d l=%d \n",i,j,k,l); 
//        /*Place Position*/
//      for(; !(i == 91 && j == 181 && k == 131 && l==70); ){

//       if(i<=91) i=91;
//       else i--;
//       if(j>=181) j=181;
//       else j++;
//       if(k>=131) k=131;
//       else k++;
//       if(l<=71) l=71;
//       else l--;
//       printf("i=%d j=%d k=%d l=%d \n",i,j,k,l); 
//     }
//     return 0;
// }
#include<stdio.h>

int main()
{
  int a[] = {10,11,-1,56,67,5,4};
  int *p=NULL, *q;
  p = a;
  printf("P:%d\n",*p);
  printf("%d %d %d",*p++, (*p)++, *(++p));
}