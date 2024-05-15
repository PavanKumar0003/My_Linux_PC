//1) Write a function to calculate simple interest. Call it in main function with appropriate inputs 
//and print the total amount the user will get after the tenure (principle + interest)

#include<stdio.h>

void simpleInt(float, int, float);

int main(){
    float n,roi=2.5;
    int pri=10000,m=13;
    n=m/12.0;
    simpleInt(roi,pri,n);
    return 0;
}

void simpleInt(float roi, int p,float n){
    float si =(p*roi*n)/100;
    printf("Tenure:%.2f",si+p);
}

//  si=(Pric*ROI*Months)/100