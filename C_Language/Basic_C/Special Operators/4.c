#include <stdio.h>

int main(){
int a,b,c,d,e,f;
float p;
printf("enter marks of 6 subjects: \n");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

p=(float)(a+b+c+d+e+f)/6;
printf("you got %f percentage\n",p);


if(p>=40){
    if(p<=50) printf("3rd");
    if(p>50 && p<=60) printf("2nd");
    if(p>60 && p<=80) printf("1st");
    if(p>80 && p<=100) printf("Honors");
}

else{
    printf("Fail");
}
   return 0;
}