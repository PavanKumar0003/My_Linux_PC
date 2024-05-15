/*
     *
    ***
   *****
  *******
 *********
  *******
   ***** 
    ***
     *
*/


#include<stdio.h>

int main()
{
	int C=5,R=1;

	for(R=1;R<=5;R++){
		for(C=5;C>R;C--) printf(" ");
          for(C=1;C<=R;C++) printf("*");
          for(C=1;C<R;C++) printf("*");
		printf("\n");
	}
     for(R=1;R<=4;R++){
		for(C=1;C<=R;C++) printf(" "); // done 
          for(C=R;C<5;C++) printf("*");
          for(C=3;C>=R;C--) printf("*");
		printf("\n");
	}
}

