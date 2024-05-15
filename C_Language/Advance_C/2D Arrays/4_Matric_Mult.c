/*4. Write a program  for matrix Multiplication.*/
#include<stdio.h>

void Mul(int R1,int C1,int R2,int C2,int arr1[R1][C1],int arr2[R2][C2]);

int main(){
    int R1,C1,R2,C2;
    printf("Enter R1,C1,R2,C2 value:");
    scanf("%d,%d,%d,%d",&R1,&C1,&R2,&C2);
    int arr1[R1][C1],arr2[R2][C2];   //3 rows 3 columns
    if(C1==R2){
        //Scan arr-1
        printf("***Enter arr1***\n");
        for(int i=0;i<R1;i++){
            for(int j=0;j<C1;j++){
                scanf("%d",&arr1[i][j]);
            }
        }
        //Scan arr-2
        printf("***Enter arr2***\n");
        for(int i=0;i<R2;i++){
            for(int j=0;j<C2;j++){
                scanf("%d",&arr2[i][j]);
            }
        }
        Mul(R1,C1,R2,C2,arr1,arr2);
    }
    return 0;
}

void Mul(int R1,int C1,int R2,int C2,int arr1[R1][C1],int arr2[R2][C2]){
    int temp=0;
    int Multi[R1][C2];
    for(int i=0;i<R1;i++){
        for(int j=0;j<C2;j++){
            Multi[i][j]=0;
            for(int k=0;k<C1;k++){
                Multi[i][j]+=(arr1[i][k] * arr2[k][j]);
            }
        }
    }
    printf("MUL Result:\n");
    for(int i=0;i<R1;i++){
        for(int j=0;j<C2;j++){
            printf("%d ",Multi[i][j]);
        }
        printf("\n");
    }
}