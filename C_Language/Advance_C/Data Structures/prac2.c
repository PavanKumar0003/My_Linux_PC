/*Structure as a Function argument*/

#include<stdio.h>
#include<string.h>

typedef struct{
    int ID;
    char Name[10];
    float grade;
}std1;

void fun(std1 *nDUP);

int main(){
    std1 name;
    fun(&name);
    printf("%f,%d,%s",name.grade,name.ID,name.Name);
    return 0;
}

void fun(std1 *nDUP){
    nDUP->grade=30;
    nDUP->ID=1;
    strcpy(nDUP->Name,"Pavan");
}