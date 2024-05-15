#include <stdio.h>

int main(){
int a,b,c,d,e,f;
float p;
printf("enter marks of 6 subjects: ");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

p=(float)(a+b+c+d+e+f)/6;
printf("marks percentage is %.2f",p);

return 0;
}