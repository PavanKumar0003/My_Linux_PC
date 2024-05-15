/*
*****
****
***
**
*

*/

#include<stdio.h>
#include<math.h>

int main()
{
	int R=1,C=5;

	for(;R<=5;R++){
		for(C=5;C>=R;C--) printf("*");
	printf("\n");
	}
	return 0;
}