#include<stdio.h>


int main(){
    enum day{sun,mon,tus,wed,thur,fri,sat};  /*Default value of  enum members starts from 0*/
    enum day w ;    /*Creating Instance w*/
    //0printf("%d",w);
    w = sat;        /*Assigning Instance w, with one of the enum member*/
    printf("%d",w);
}