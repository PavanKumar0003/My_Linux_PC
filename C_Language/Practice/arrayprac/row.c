// #include<stdio.h>

// // //2D array sorting
// // int main(){
// //     int arr[][3]={20,1,0,3,2,5,4,15,10};
// //     int temp=0,status=0;

// //     do{
// //         status=0;
// //         for(int i=0; i<3 ; i++){
// //             for(int j=0;j<3;j++){
// //                 if(arr[i][j]>arr[i][j+1]){
// //                     temp = arr[i][j];
// //                     arr[i][j] = arr[i][j+1];
// //                     arr[i][j+1] = temp;
// //                     status = 1;
// //                 }
// //             }
// //         }
// //     }while(status);

// //     for(int i=0; i<3; i++){
// //         for(int j=0;j<3;j++){
// //             printf("%d ",arr[i][j]);
// //         }
// //     }

// //     return 0;
// // }


// //1D array sorting
// int main(){
//     int arr[]={20,1,0,3,2,5,4,15,10};
//     int temp=0, status=0;

//     do{
//         status=0;
//         for(int i=0; i<sizeof(arr)/4; i++){
//             if(arr[i]>arr[i+1]){
//                 temp = arr[i];
//                 arr[i] = arr[i+1];
//                 arr[i+1] = temp;
//                 status = 1;
//             }
//         }
//     }while(status);

//     for(int i=0; i<sizeof(arr)/4; i++)
//             printf("%d ",arr[i]);
//     return 0;
// }

#include<stdio.h>

//2D array sorting
int main(){
    int arr[][3]={20,1,0,3,2,5,4,15,10};
    int temp=0,status=0;
    int j=0;
    do{
        status=0;
        int num_rows=sizeof(arr)/sizeof(arr[0]);
        int num_cols=sizeof(arr)/sizeof(arr[0][0]);

        for(int i=0; i<num_rows; i++){
                for(int k=0;k<num;k++){
                if(arr[i][k]>arr[i][k+1]){
                    temp = arr[i][k];
                    arr[i][k] = arr[i][k+1];
                    arr[i][k+1] = temp;
                    status = 1;
                    j++;
                }
                j=0;
            }
        }
    }while(status);

    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
    }

    return 0;
}

