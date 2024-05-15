/*
14) write a function to take an array as input, and count how many times the biggest number is repeated in that array, and return the count.
eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};

output : biggest number is repeated 4 times
*/
#include<stdio.h>
void Numrepeat(int a[], int);
int main(){
    int size;
    printf("Enter Size:");
    scanf("%d",&size);
    int a[size];
    //read elements
    for(int i=0; i<size; i++){
        printf("enter [%d] element:",i);
        scanf("%d",&a[i]);
    }
    Numrepeat(a,size); //
    return 0;
}

void Numrepeat(int a[],int size){
    int c=0,x=0;
    for(int i=0; i<size; i++) if(a[i]>x) x=a[i];
    for(int i=0; i<size; i++) if(x==a[i]) c++;
    printf("\n%d is big",x);
    printf("\nRepeated %d Times",c);
    return 0;
}