/*
2.	Write the following program :
    Declare a two dimensional array of elements and find and print its transpose.
    eg., if the matrix is :       1 3
                                  4 5
                                  7 8

    its transpose should be :     1 4 7
                                  3 5 8
*/
#include<stdio.h>

void Transpose(int R,int C,int arr[R][C]);

int main(){
    int R,C;
    printf("Enter R,C value:");
    scanf("%d,%d",&R,&C);
    int arr[R][C];   
    
    //Scan arr-
    printf("***Enter arr***\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            printf("Enter arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    Transpose(R,C,arr);
    return 0;
}

void Transpose(int R,int C,int arr[R][C]){
    printf("******Transpose Result******\n");
    printf("Before Transpose :\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("After Transpose :\n");
    for(int i=0;i<C;i++){
        for(int j=0;j<R;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
