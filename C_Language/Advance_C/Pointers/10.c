//10.AtoI
#include<stdio.h>
//48='0' to 57='9'
int main(){
    char s1[]="9520";
    printf("Result:%d",myatoi(s1));
    return 0;
}

int myatoi(char *s){
    int x=0,i,y=1,sum=0,se=0;
    for(int i=0;*(s+i);i++) se++;  //array length
    for(int i=0;*(s+i);i++){
        x=*(s+i)-48;        // char to int 
        for(int i=1;i<se;i++) y*=10;  // position (1000,100,10,1)
        x*=y;
        sum+=x;
        se--;
        y=1;
    } 
    return sum;
}