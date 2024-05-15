/*5) Implement itoa function and return the string from the function. Print the result in main. 
   itoa function takes an integer as input, and stores the integer in a string.
*/
#include<stdio.h>
#include<stdlib.h>

char *myItoA(int *);

int main(){
    int *var;
    var=(int *)malloc(sizeof(int));
    printf("enter Values:");
    scanf("%d",var);
    printf("number String:%s",myItoA(var));
    return 0;
}

char *myItoA(int *num){
    static char str[100];  //why Static-> as char str[100] is local and its scope in inside function,once function over all the data inside str ERASE. 
    int i=0,c=0;
    *(str+99)=0;
    for(i=98;*num!=0;i--){
        *(str+i)=((*num%10)+48);
        *num/=10;       
    }
    return (str+i+1);
}