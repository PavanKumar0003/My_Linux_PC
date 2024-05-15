/*3.	Write a program  for matrix addition and subtraction.*/
#include<stdio.h>

void Add(int R,int C,int arr1[R][C],int arr2[R][C]);
void Sub(int R,int C,int arr1[R][C],int arr2[R][C]);

int main(){
    int R,C;
    printf("Enter R,C value:");
    scanf("%d,%d",&R,&C);
    int arr1[R][C],arr2[R][C];   //3 rows 3 columns
    if(R==C){
        //Scan arr-1
        printf("***Enter arr1***\n");
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                printf("Enter arr1[%d][%d]:",i,j);
                scanf("%d",&arr1[i][j]);
            }
        }
        //Scan arr-2
        printf("***Enter arr2***\n");
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                printf("Enter arr2[%d][%d]:",i,j);
                scanf("%d",&arr2[i][j]);
            }
        }
        Add(R,C,arr1,arr2);
        Sub(R,C,arr1,arr2);
    }
    else 
    printf("***Enter Valid Matrx Size***");
    return 0;
}

void Add(int R,int C,int arr1[R][C],int arr2[R][C]){
    int a1[R][C];
    //Array Copy
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            a1[i][j]=arr1[i][j];
        }
    }
    //Addition Operation
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            a1[i][j]+= arr2[i][j];
        }
    }
    printf("ADD Result:\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }
}

void Sub(int R,int C,int arr1[R][C],int arr2[R][C]){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            arr1[i][j]=arr1[i][j] - arr2[i][j];
        }
    }
    printf("SUB Result:\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
}