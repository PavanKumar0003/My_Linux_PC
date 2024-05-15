/*
2.Read 6 subject marks of n students and count how many of them scored above 80% and print the count.
use nested loop to read the marks for 6 subjects and calculate the sum and percentage
*/

#include<stdio.h>

int main()
{
	int i,n,subjs,c=0, sub=0,sum=0;
    float percentage=0;
    printf("Enter No of students:");
    scanf("%d",&n);

	for(i=1;i<=n;i++){
        printf("Enter Marks of Student_%d marks:\n",i);

		for(subjs=1 ; subjs<=6 ; subjs++){
            printf("Subject_%d :",subjs);
            scanf("%d",&sub);
            sum+=sub;
        }
            percentage = sum / 6;
            printf("sum : %d \n",sum);
            printf("Percentage : %f\n",percentage);

            if(percentage > 80){c++;}
	}
    printf("No of Students scored above 80%% are : %d",c);
	return 0;
}