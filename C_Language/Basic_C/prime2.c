#include<stdio.h>

int main(){
    int num=10,c=0;

    for(int i=1;i<=num;i++){
        if(num%i==0){
            c++;
            if(c==2) printf("%d ",i);
        }
    }
    return 0;
}