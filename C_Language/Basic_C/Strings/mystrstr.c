#include<stdio.h>

int main(){
    char str[]="Pavan Kumar Kumar Kumar", sub[]="Kumar";
    int i,j,c=0;
    for(i=0;str[i];i++){
        for(j=0;sub[j];j++){
            if(str[i+j]!=sub[j]) break;
        }
        if(strlen(sub)==j){
            c++;
        }
    }
    printf("how many time :%d ",c);
    return 0;
}