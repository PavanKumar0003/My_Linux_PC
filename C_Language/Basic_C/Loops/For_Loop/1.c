#include<stdio.h>

int main(){
    int x,n,i,a;
    printf("Enter max iteration count: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        printf("enter number:");
        scanf("%d",&a);
        if(i>=1 && x!=0){
            if(x>a) printf("%d is Smaller then Prev Value\n",a);
            else printf("%d is Bigger then Prev Value\n",a);
        }
        x=a;
        
    }
    return 0;
}