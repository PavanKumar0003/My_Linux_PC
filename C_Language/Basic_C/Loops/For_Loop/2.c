#include<stdio.h>

int main(){
    int x=0,n,i,a,c=0;

    for(;i=1;i++){
        printf("enter number:");
        scanf("%d",&a);

        if(a>0){
            c++;
            if(i>=1 && x!=0){
                if(x>a){c-=1; printf("wrong input ,please enter a number bigger than %d\n",a); }
            }
            x=a;
        }
        else{
            printf("Total: %d",c);
            break;
        }   
    }
    return 0;
}