/*Pointer structure*/

#include<stdio.h>
#include<string.h>

typedef struct{
    int ID;
    char Name[10];
    float grade;
}std1;

int main(){
    std1 name;
    std1 *nDUP=&name;
    nDUP->grade=30;
    nDUP->ID=1;
    strcpy(nDUP->Name,"Pavan");
    printf("%f,%d,%s",nDUP->grade,nDUP->ID,nDUP->Name);

    /*   
    (*nDUP).grade=30;
    (*nDUP).ID=1;
    strcpy((*nDUP).Name,"Pavan");
    printf("%f,%d,%s",(*nDUP).grade,(*nDUP).ID,(*nDUP).Name);
    */
    return 0;
}