/*
input: 0xABCDEF01;
output:0xBADCFE10; 
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 0xABCDEF01;
    int i,t=0,t2=0,tot=0;
    printf("data:%x,size:%d",a,sizeof(a));
    for(i=7;i>=1;i--){
        if(i%2!=0 && i>1){
            t= ((a & (0xF<<(4*i))) >> (4*i)) & (0xF); // 0xA
            t2=((a & (0xF<<(4*(i-1)))) >> (4*(i-2))) & (0xF0); //0xB0
            a=(a & ~(0xFF << (4*(i-1)))) | ((t2|t)<<(4*(i-1)));
        }
        if(i==1){
            t= ((a & (0xF<<4)) >> (4)) & (0xF);
            t2=((a & (0xF<<0)) << (4)) & (0xF0);
            a=(a & ~(0xFF << 0)) | ((t2|t));
        }
    }
    // printf("\n1st char:%x",t);
    // printf("\n2nd char:%x",t2);
    // printf("\ntotal char:%x",tot);
    printf("\ntotal:%x",a);
    return 0;
}