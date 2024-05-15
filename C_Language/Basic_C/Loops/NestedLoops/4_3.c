/*
    *
   **
  ***
 ****
*****

*/

#include<stdio.h>

int main()
{
	int R,C;

	for(R=1;R<=5;R++){
		for(C=5;C>=1;C--){
			if(C<=R) printf("*");
			else printf(" ");
		}
		printf("\n");
    }
	return 0;
}