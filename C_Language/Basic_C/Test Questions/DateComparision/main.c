#include"dates.h"

extern int d2,m2,y2;
int i,nCandidate;

int main(){
    int d,m,y;
    printf("Enter no.of Candidates:");
    scanf("%d",&nCandidate);

    for(i=1;i<=nCandidate;i++){
        printf("DOB of candidate-%d:",i);
        scanf("%d-%d-%d",&d,&m,&y);

        if(isvalidDate(d,m,y) !=1){
            while(isvalidDate(d,m,y) !=1){
                printf("Date invalid, plz enter proper date:");
                scanf("%d-%d-%d",&d,&m,&y);
                isvalidDate(d,m,y);
                if(isvalidDate(d,m,y)==0) break;
            } //while loop
        }  //isvalidDate condition
        else {
            if(DateCompare(d,m,y)) PrintDateFormate(d2,m2,y2);
        }
    } //for loop

}