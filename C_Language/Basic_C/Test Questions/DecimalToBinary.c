#include<stdio.h>
//#include<math.h>
long int pow(int,int );
int main()
{
	int i=15,x=0,a; //A=13;
	long int p;
	printf("Enter Number:");
	scanf("%d",&a);

	while(i>=0){
		p=pow(2,i);
		if(p<=a){
			x+=p;
			if(x<=a) printf("1");
			else{
				x=x-p;
				printf("0");
			}
		}
		else printf("0");

		if(i==0) break;
		i--;
	}
	return 0;
}

long int pow(int base,int power){
	base=1;
	for(int i=1;i<=power;i++) base*=2;
	return base;
}