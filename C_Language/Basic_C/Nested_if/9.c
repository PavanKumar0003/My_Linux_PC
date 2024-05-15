#include <stdio.h>

int main(){
int a,b,c,d,e,f,p;
printf("enter marks of 6 subjects: \n");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

p=(a+b+c+d+e+f)/6;
if(p>=80)
printf("you got %d percentage,Honours");
else if(p>=60){
    printf("First Division");
}
else if(p>=50){
    printf("Second Division");
}
else if(p>=40){
    printf("Third Division");
}
else if(p>=0){
    printf("Fail");
 }
return 0;
}