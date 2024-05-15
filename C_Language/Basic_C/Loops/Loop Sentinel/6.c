#include<stdio.h>
int main()
{
    int  a,b,c,r;
    printf("enter a and b:");
    scanf("%d,%d",&a,&b);
    c=0;
    while(1)
    {
        if(a<b)
        {
            r=a;
            break;
        }
        else if(a>=b)
        {
            a=a-b;
            c++;
        }
    }
    
    printf("quationt: %d\n",c);
    printf("Reminder: %d\n",r);
    return 0;
}