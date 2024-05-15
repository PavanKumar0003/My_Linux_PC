/*
1.	Declare a two-dimensional array of elements for sales details of a store,
    for each item, for each sales man. Take the sales values as input and print the array in matrix form.
    
    Find out and print the following :
    1) Total sales by each sales man
    2) Total sales for a item
    3) Total sales
*/

#include<stdio.h>

int main(){
    int R,C,Msum=0,Isum=0,Totsum=0;
    printf("Enter R,C value:");
    scanf("%d,%d",&R,&C);
    int arr[R][C];   
    
    //Scan arr-
    printf("***Enter Sales matrics***\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            printf("Enter Man[%d]Item[%d]:",i,j);
            scanf("%d",&arr[i][j]);
            Totsum=Totsum+arr[i][j];
        }
    }
    //Print in Matrix form
    printf("\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
        Msum=0;
    }
    //Man total Sum
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++)
            Msum=Msum+arr[i][j];
        printf("\nSales Man[%d] total sale:%d",i,Msum);
        Msum=0;
    }
    //Item Total sum
    for(int i=0;i<C;i++){
        for(int j=0;j<R;j++)
            Isum=Isum+arr[j][i];
        printf("\nItem Total of man[%d]:%d",i,Isum);
        Isum=0;
    }
    printf("\nTotal Sale:%d",Totsum);
    return 0;
}