/*
13) write a function to take 2 arrays as input and
 return 1 if they are equal and 0 if they are not equal ( sizes to be sent as seperate arguments)
*/

#include<stdio.h>
int arrCompare(int a[],int b[],int,int);
int main(){
    int Asize=5,Bsize=5;
    int a[]={1,2,3,4,5},b[]={1,2,3,4,5};
    if(arrCompare(a,b,Asize,Bsize)){
        printf("Both arrays are equal");
    }
    else printf("Both arrays are not equal");
    return 0;
}

int arrCompare(int a[],int b[],int Asize,int Bsize){
    int i;
    if(Asize==Bsize){
        for(i=0;i<Asize;i++){
            a[i]==b[i];
            if(a[i]!=b[i]) return 0;
        }
        return 1;
    } 
    else return 0;

}