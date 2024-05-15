//Characte to integer
//"123" -> 123

#include<stdio.h>
int myatoi(char *str);

int main()
{
    char str[]="123456";
    printf("%d",myatoi(str));
    return 0;
}

int myatoi(char str[]){
    int t=0,t2=0,sz=6,pw=1,j;
    for(int i =0;str[i];i++){
        t=str[i]-48;
        for( j = 1;j<sz;j++) pw*=10; 
        t2+=pw*t;
        sz--;
        pw=1;
    }
    return t2;
}

