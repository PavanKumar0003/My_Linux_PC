/*
with out nested for
     *
    * *
   * * *
  * * * *
 * * * * *
 
*/


#include<stdio.h>

int main()
{
	int C=5,R=1;

	for(;R<=5;R++){
		for(;C>=1;C--){
			if(C<=R) printf("* ");
			else printf(" ");
		}
        
		C=5;
		printf("\n");
	}
}