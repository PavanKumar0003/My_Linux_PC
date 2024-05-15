/*
1
12
123
1234
12345

*/

#include<stdio.h>
#include<math.h>

int main()
{
	int R=1,C=1,x=5;

	for(;R<=5;R++){
		for(C=1;C<=R;C++){
            printf("%d",x);
        }
        x--;
		printf("\n");

	}

	return 0;
}