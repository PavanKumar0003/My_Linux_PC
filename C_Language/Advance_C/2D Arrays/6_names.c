/*6.  Declare a two dimensional array of characters, read names from the user and print them back with
    each individual character format (%c) in a loop.
*/

#include<stdio.h>

int main(){
    int R,C;
    printf("Enter R,C value:");
    scanf("%d,%d",&R,&C);
    char arr1[R][C];  
    printf("******Enter names******");
    for(int i=0;i<R;i++){
        printf("\nEnter name[%d]:",i);
        for(int j=0;j<C;j++)
            scanf(" %c",&arr1[i][j]);
    }
    for(int i=0;i<R;i++){
        printf("Name[%d]:",i);
        for(int j=0;j<C;j++){
            printf("%c",arr1[i][j]);  
        }
         printf("\n");
    }
    return 0;
}