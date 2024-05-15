/*nested Structure using pointers*/

#include<stdio.h>
#include<string.h>

typedef struct{
    int Tsec;
    int Tmin;
    int Thours;
}Time;

typedef struct{
    Time *tim;      //Instance Creation for Time structure
    int ID;
    char Name[10];
    float grade; 
}std1;

int main(){
    std1 *det;
    
    det->tim->Tsec=59;
    det->tim->Tmin=59;
    det->tim->Thours=12;

    det->grade=99.9;
    det->ID=10;
    strcpy(det->Name,"Pavan");

    printf("grade:%f\nID:%d\nName:%s\n",det->grade,det->ID,det->Name);
    printf("Hours:%d\nMins:%d\nSec's:%d\n",det->tim->Thours,det->tim->Tmin,det->tim->Tsec);
    return 0;
}