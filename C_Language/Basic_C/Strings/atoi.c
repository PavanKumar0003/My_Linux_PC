#include<stdio.h>
//48='0' to 57='9'
int main(){
    char s1[]="9520";
    printf("Result:%d",myatoi(s1));
    return 0;
}

int myatoi(char s[]){
    int x=0,y=1,sum=0,se=0;
    for(int i=0;s[i]!='\0';i++) se++;
    for(int i=0;s[i]!='\0';i++){
        x=s[i]-48;
        for(int i=1;i<se;i++) y*=10;
        sum+=x*y;
        se--;
        y=1;
    } 
    //printf("Sum %d",sum);
    return sum;
}