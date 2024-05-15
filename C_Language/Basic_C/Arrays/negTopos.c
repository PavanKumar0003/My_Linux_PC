//12 Write a function to modify the array such that all negative numbers are converted to positive.

#include<stdio.h>
int ntp(int a[],int);
int main(){
    int num[]={-1,-30,-20,-86}, size;
    size=sizeof(num)/4;
    ntp(num,size);
    return 0;
}

int ntp(int a[],int size){
    printf("Positive number are:"); 
    for(int i=0;i<size;i++){
        if(a[i]<0) a[i]=a[i]*-1;
        printf("%d,",a[i]);
    }
}