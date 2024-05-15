//11.ItoA

#include<stdio.h>
#include<string.h>

char *myItoA(int *);
char *mystrrev(char *);

int main(){
    int a=1923;
    printf("ItoA:%s",myItoA(&a));
    return 0;
}

char *myItoA(int *num){
    int rand;
    static char str[100];  //why Static-> as char str[100] is local and its scope in inside function,once function over all the data inside str ERASE. 
    int i=0,c=0,temp;
    temp=*num;
    
    for(i=0;*num!=0;i++){
        rand = *num%10;
        *(str+i)=(rand+48);
        *num/=10;       
    }

    *(str+i)='\0';
    mystrrev(str);
    return str;
}

char *mystrrev(char *str){
    char temp;
    int s=0;
    for(int i=0;*(str+i);i++) s++;
    s--;
    for(int i=s;i>s/2;i--){
        temp=*(str+i);
        *(str+i)=*(str+(s-i));
        *(str+(s-i))=temp;
    }
    return str;
}