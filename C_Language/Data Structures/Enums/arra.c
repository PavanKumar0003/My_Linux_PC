// // #include<stdio.h>

// // int main(){
// //     int n,temp;
// //     printf("enter n:");
// //     scanf("%d", &n);
// //     int arr[n];
// //     int x;
// //     printf("enter elements:");
// //     for(int i=0;i<n;i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     printf("enter serach var:");
// //     scanf("%d",&x);

// //     for(int i=0;i<n;i++){
// //         if(arr[i]==x){
// //             arr[i] = 1;
// //         }
// //     }

// //     printf("\nArray is bef:");
// //     for(int i=0;i<n;i++){
// //         printf("%d",arr[i]);
// //     }
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<n;j++){
// //             if(arr[j]!=1){
// //                 temp= arr[i];
// //                 arr[i]=arr[i+1];
// //                 arr[i+1]=temp;
// //             }
// //         }
// //     }
// //     printf("\nArray is aft:");
// //     for(int i=0;i<n;i++){
// //         printf("%d",arr[i]);
// //     }
// // }


// #include<stdio.h>

// int main(){
//     int n, temp;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     int arr[n];
//     int x;
//     printf("Enter elements: ");
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter search var: ");
//     scanf("%d", &x);

//     for(int i = 0; i < n; i++){
//         if(arr[i] == x){
//             arr[i] = 1;
//         }
//     }

//     printf("\nArray is bef: ");
//     for(int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//     }

//     // Move all ones to the left side of the array
//     int left = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] != 1){
//             temp = arr[left];
//             arr[left] = arr[i];
//             arr[i] = temp;
//             left++;
//         }
//     }

//     printf("\nArray is aft: ");
//     for(int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

#include<stdio.h>

int main(){
    int n, temp;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    int x;
    printf("Enter elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter search var: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            arr[i] = 1;
        }
    }

    printf("\nArray is bef: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    // Move all ones to the right side of the array
    int right = n - 1;
    for(int i = n - 1; i >= 0; i--){
        if(arr[i] != 1){
            temp = arr[right];
            arr[right] = arr[i];
            arr[i] = temp;
            right--;
        }
    }

    printf("\nArray is aft: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
