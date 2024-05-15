
#include<stdio.h>

int main(){
    int arr[4][2]={{10,15},{11,10},{12,17},{14,0}};
    int i,j,temp;
    for(int x=0;x<8;x++){
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            if(arr[i][j]>arr[i][j+1]){
                temp=arr[i][j];
                arr[i][j]=arr[i][j+1];
                arr[i][j+1]=temp;
            }
        }
    }
    }
    for(i=0;i<4;i++){
        for(j=0;j<2;j++)
            printf("%d ",arr[i][j]);
            printf("\n");
    }
}