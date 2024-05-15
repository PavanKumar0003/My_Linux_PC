//13) Write a function that takes 2 dates as inputs, and returns 1 if the first date is old,
// 2 if the second date is old.

#include<stdio.h>
int Old(int,int,int,int,int,int);

int main(){
    int d1,m1,y1,d2,m2,y2;
    printf("Enter d1-m1-y1,d2-m2-y2:");
    scanf("%d-%d-%d,%d-%d-%d",&d1,&m1,&y1,&d2,&m2,&y2);
    printf("return value = %d",Old(d1,m1,y1,d2,m2,y2));
    return 0;
}

int Old(int d1,int m1,int y1,int d2,int m2,int y2){
    if(y1<y2){
        return 1;
    }
    else if(y1==y2){
        if(m1<m2) return 1;
        else if(m1==m2){
            if(d1<d2) return 1;
            else return 2;
        }
        else return 2;
    }
    else return 2;
}