#include<stdio.h>

void rotate(int a[],int ,int);
int main(){
    int a[]={1,2,3,4,5,6,7},size=7,d=2;
    rotate(a,d,size);
    for(int i=0;i<size;i++) printf("%d,",a[i]);
    return 0;
}

void rotate(int a[],int d,int n){
    for(int i=0;i<d;i++){
        int temp =a[0];
        for(int i=0;i<n;i++){
            if(i==(n-1)) a[n-1]=temp;
            else a[i]=a[i+1];
        }
    }
}