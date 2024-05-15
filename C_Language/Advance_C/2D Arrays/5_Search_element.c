/*5.Search for an element in a two dimentional array, and print its position - as row and column numbers.
    write a search function that will receive the array and return row and column indexes as output.*/

#include<stdio.h>

void Search(int R,int C,int arr[R][C],int*,int*,int);

int main(){
    int R,C,Sr=0,Sc=0,ele;
    printf("Enter R,C value:");
    scanf("%d,%d",&R,&C);
    int arr[R][C];   //R rows C columns
    
    //Scan arr
    printf("***Enter arr***\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            printf("Enter arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter search element:");
    scanf("%d",&ele);
    Search(R,C,arr,&Sr,&Sc,ele);
    printf("Element found at: %d Row,%d Column",Sr,Sc);
    return 0;
}

void Search(int R,int C,int arr[R][C],int *Sr,int *Sc,int ele){
    int a1[R][C];
    //Array Copy
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(arr[i][j]==ele){
                *Sr=i;*Sc=j;
            }
        }
    }
}