#include <stdio.h>

int main(){
int a,b,c,d,e,f,p,cs;
printf("enter marks of 6 subjects: \n");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

p=(a+b+c+d+e+f)/6;
switch (p)
 {
    case 80 ... 100:printf("you got %d percentage,Honours",p); break;
    case 60 ... 79:printf("First Division"); break;
    case 50 ... 59:printf("Second Division");break;
    case 40 ... 49:printf("Third Division"); break;
    default:printf("Fail");break;
 }

  return 0;
}