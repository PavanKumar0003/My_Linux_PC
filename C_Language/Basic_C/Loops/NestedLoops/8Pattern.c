/*
0
10
010
1010
01010

*/

#include<stdio.h>

int main()
{
	int R=1,C=1;

	for(;R<=5;R++){
		
		for(C=1;C<=5;C++){

			if(R%2==0 && C%2!=0) printf("0");
			else if(R%2!=0 && C%2==0) printf("0");
			else printf("1");

            if(C==R) break;
		}
		printf("\n");
	}

	return 0;
}