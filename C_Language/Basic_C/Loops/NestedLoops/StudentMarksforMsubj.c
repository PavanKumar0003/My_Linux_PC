/*
3.Read m subject marks of n students ( take number of subjects as input for every student, 
and accordingly read the marks and calculate percentage ) and print who is the topper.
Assume every student chooses different number of subjects in their course.
*/

#include<stdio.h>

int main()
{
	int i,n,subjs,c=0,subTot,sub=0,sum=0;
    float percentage=0;
    printf("Enter No of students:");
    scanf("%d",&n);

	for(i=1;i<=n;i++){
        printf("Enter No of Subjects:");
        scanf("%d",&subTot);
        printf("Enter Marks of Student_%d marks:\n",i);

		for(subjs=1 ; subjs<=subTot ; subjs++){
            printf("Subject_%d :",subjs);
            scanf("%d",&sub);
            sum+=sub;
        }
            percentage = sum / subTot;
            printf("sum : %d \n",sum);
            printf("Percentage : %f\n",percentage);

            if(percentage > 80){c++;}
	}
    printf("No of Students scored above 80%% are : %d",c);
	return 0;
}