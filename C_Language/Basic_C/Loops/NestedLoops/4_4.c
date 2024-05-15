/*
1
22
333
4444
55555

*/

#include<stdio.h>
#include<math.h>

int main()
{
	int R=1,C=1;

	for(;R<=5;R++){
		for(C=1;C<=R;C++)  printf("%d",R);
		printf("\n");

	}

	return 0;
}