/*3) create a string dynamically, copy a string constant to it ("Kernel"). Create another string dynamically. 
    Copy the first string to second string.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *str1,*str2,size=6;
    str1=(char *)malloc(size*sizeof(char));
    str2=(char *)malloc(size*sizeof(char));
    strcpy(str1,"Kernal");
    printf("String1:%s\n",str1);
    printf("String2:%s",strcpy(str2,str1));
    free(str1);free(str2);
    return 0;
}