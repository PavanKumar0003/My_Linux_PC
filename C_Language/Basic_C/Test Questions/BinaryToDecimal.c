#include<stdio.h>
#include<math.h>

int main()
{
	int i=15,x=0,a,n; //A=13;
	long int p;
    printf("Enter How many Digit number:");
	scanf("%d",&n);
	printf("Enter Number:");
	scanf("%d",&a);

	while(i<n){

        x = i % 10;
        a/=10;
        if(x==1){
            p=pow(2,i);
            
                if(p<=a){
                    x+=p;
			        if(x<=a){
				        printf("1");
			        }
			        else{
				        x=x-p;
				        printf("0");
			        }
		        }
        }
		i++;
	}
	return 0;
}