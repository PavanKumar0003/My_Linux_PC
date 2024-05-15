/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include<stdio.h>
#include<math.h>

int main()
{
	int R,C,x=0;

	for(R=5;R>=1;R--){
		for(C=5;C>=R;C--){
            x++;
            printf("%d ",x);
        }
		printf("\n");

	}

	return 0;
}