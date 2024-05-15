/*
n students input
passmark input
6 subj marks
count how many got honors, 1st,2nd,3rd

*/

#include<stdio.h>

int main()
{
    int p,i=1,k,a,b,c,d,e,f,AvgStd=0,x,y,z,o;
    
    printf("Enter PassMark:");
    scanf("%d",&p);

    while(i){
        printf("enter Sudent Marks: ");
        scanf("%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f);

        if(a>=p && b>=p && c>=p && d>=p && e>=p && f>=p){
            AvgStd = (a+b+c+d+e+f)/6;

            if(AvgStd > 75){
                x++;
                printf("%d ",x);
                printf("Stduents_%d got Distinction \n",i);
            }
            else if(AvgStd > 60){
                y++;
                printf("%d ",y);
                printf("Stduents_%d got 1st \n",i);
            }
            else if(AvgStd > 50){
                z++;
                printf("%d ",z);
                printf("Stduents_%d got 2nd \n",i);
            }
            else{
                o++;
                printf("%d ",o);
                printf(" students are Fail \n");
            }
        }
        else printf("Fail");

        printf("Continue(1) / Terminate(0):");
        scanf("%d",&k);    
        if(k==0) break;
        i++;
    }
    return 0;
}