/*8) Write a function to determine if a character is alphanumeric or not and print the appropriate output in main function.
   (return 1 if it is alphanumeric, 0 if it is not alpha numeric).
   Hint: int fun_alpha_num(char c).
*/

#include<stdio.h>
int alphaNumeric(char);

int main(){
    char w='a';
    if(alphaNumeric(w)) printf("Alphanumeric");
    else printf("Not Alphanumeric");
    return 0;
}

int alphaNumeric(char w){
    if ((w>='A' && w<='Z') || (w>='a'&& w<='z') || (w>='0' && w<='9') ) return 1;
    else return 0;
}


