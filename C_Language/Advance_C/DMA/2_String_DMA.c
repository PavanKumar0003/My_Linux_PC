//2) create a string dynamically, read and print its value.

#include<stdio.h>
#include<stdlib.h>

int main(){
    char *str,size;
    printf("Enter size:");
    scanf("%d",&size);
    str=(char *)malloc(size*sizeof(char));
    printf("\nenter String of %d characters:",size);
    scanf("%s",str);
    printf("String:%s",str);
    free(str);
    return 0;
}