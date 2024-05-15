//9	Write a program to print an integer in binary format using arrays.

#include<stdio.h>
long int pow(int,int );
int main()
{
	int i=15,x=0,a,q=0,y=0,z=0;
	int arr[15];
	long int p;
	printf("Enter Number:");
	scanf("%d",&a);

	for(i=15;i>=0;i--){
		p=pow(2,i);
		if(p<=a){
			x+=p;
			if(x<=a){
				arr[q]=1;
				q++;
			}
			else{
				x=x-p;
				arr[q]=0;
				q++;
			}
		}
		else{
			arr[q]=0;
			q++;
		}
		if(i==0) break;
	}
	printf("Output is:");
	for(int j=0;j<=15;j++){
		printf("%d",arr[j]);
	}
	return 0;
}

long int pow(int base,int power){
	int B=1;
	for(int i=1;i<=power;i++) B*=base;
	return B;
}