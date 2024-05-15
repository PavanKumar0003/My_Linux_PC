//11 Write a function to return the average of marks of all students in a class.
#include<stdio.h>

int main(){
    int avg,size=8;
    int marks[]={50,20,40,60,30,10,90,100};  // marks of 8 students;
    printf("Average is:%d",avrg(marks,size));
}

int avrg(int m[],int size){
    int x=0;
    for(int i=0;i<size;i++) x+=m[i];
    return x/size;
}