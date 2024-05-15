#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *var;
    var=(int *)malloc(sizeof(int)*10);
    printf("Enter array:");
    for(int i=0;i<10;i++){
        printf("\nEnter ele %d:",i);
        scanf("%d",(var+i));
    }

    printf("array is:");
    for(int i=0;i<10;i++)
        printf(" %d,",*(var+i));
    return 0;
}