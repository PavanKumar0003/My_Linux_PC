// #include<stdio.h>

// int main(){
//     int a[]={1,0,5,0,6,0,7},size=7,c=0;
//     int temp,i,j;
//     for(i=0;i<size;i++){
//         if(a[i]==0){
//             //printf("Enter %d\n",c);
//             temp =a[i];
//             for(j=c;j<size;j++){
//                 a[j]=a[j+1];
//                 if(j==(size-1))
//                     a[size-1]=temp;
//             }
//         }
//         ++c;
//     }
//     for(i=0;i<size;i++) printf("%d,",a[i]);
//     return 0;
// }







#include<stdio.h>

int main(){
    int a[]={1,0,5,0,6,0,7},size=7,c=0;
    int temp,i,j;
    printf("Enter_1\n");
    for(i=0;i<size;i++){
        printf("Enter_2\n");
        if(a[i]==0){
            temp =a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
           // a[size-1]=a[i+1];
        }
    }
    for(i=0;i<size;i++) printf("%d,",a[i]);
    return 0;
}