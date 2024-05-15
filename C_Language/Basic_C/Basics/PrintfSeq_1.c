#include<stdio.h>

int main()
{
    unsigned char a,b;
    for (a=0;a<3;a++)
    {
        
        if(a==0){
            printf("  *  \n");
        }
        else if(a==1){
            printf("* * *\n");
        }
        else {
            printf("  *  \n");
        }

    }

    return 0;
}