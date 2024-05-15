/*
5
54
543
5432
54321

*/

#include<stdio.h>
#include<math.h>

int main()
{
	int R,C;

	for(R=5;R>=1;R--){
		for(C=5;C>=R;C--){
            printf("%d",C);
        }
		printf("\n");

	}

	return 0;
}