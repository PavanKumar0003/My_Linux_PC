#include"dates.h"
int d2,m2,y2;
int DateCompare(int d1,int m1,int y1){
    if(y1<y2){
        y2=y1;
        return 1;
    }
    else if(y1>y2) return 0;
    else{
        if(m1<m2){
            m2=m1;
            return 1;
        }
        else if(m1>m2) return 0;
        else {
            if(d1<d2){
                d2=d1;
                return 1;
            }
            else return 0;
        }
    }
}