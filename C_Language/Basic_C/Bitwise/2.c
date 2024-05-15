/*
input: 0xABCDEF;
output:0xA4C2E0; 

toggle even position nibbles

*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 0xABCDEF;
    int i,t=0,t2=0,tot=0;
    printf("data:%x,size:%d",a,sizeof(a));
    for(i=5;i>=0;i--){
        if(i%2==0){
            t=((a&(0xF<<(4*i)))>>(4*i)) ^ 0xF;    //Retrive even position value and toggle it
            a=((a&~(0xF<<(4*i)))) | t<<(4*i);     //Erase Even position and Insert the Toggled Value
        }
    }
    printf("\ntotal:%x",a);
    return 0;
}