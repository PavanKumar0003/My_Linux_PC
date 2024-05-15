/*
*
**
***
****
*****
*/

/// using for 

// #include<stdio.h>

// int main()
// {
// 	int R=1,C=1;

// 	for(;R<=5;R++){
// 		for(C=1;C<=R;C++)  printf("%d",R);
// 		printf("\n");
// 	}
// 	return 0;
// }

// using while

// #include<stdio.h>

// int main()
// {
// 	int R=1,C=1;

// 	while(R<=5){
		
// 		while(C<=R){
//             printf("*");
// 		    C++;	
// 		}
// 		C=1;
// 		printf("\n");
// 		R++;
// 	}
// }

//using Do while

#include<stdio.h>

int main()
{
	int R=1,C=1;

	do{
		do{
            printf("*");
		    C++;	
		}while(C<=R);

		C=1;
		printf("\n");
		R++;
	} while(R<=5);
    return 0;
}