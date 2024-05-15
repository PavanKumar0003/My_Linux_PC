/*
4) WAP - with a function that prints the following message every nth time it is called :
 Hello! I am called nth time. Print the appropriate subscript after the n, depending on the last digit.
Output : The function should print the following ,
I am called 1st time.
I am called 2nd time.``
I am called 3rd time…etc.
The subscripts also should be printed appropriately. (st, nd ,rd and th etc.).
Hint : numbers ending with 1 will have st as subscript.
Numbers ending with 2 will have nd as subscript.
Similarly, numbers ending with 3 will have rd and all the remaining numbers will have th.
*/

/*
(x=i%100 && x/10==1) --> any digit with 11,12,13 for "th"
(i%10==0 || i%10>=4) --> number > 4 and number ending with 0 are "th"
i%10==i --> any number ending with i=1 st ,i=2 nd,i=3 rd
*/
#include<stdio.h>

void subs();
static int i,n;
void main(){
    printf("enter How many times you want to Print:");
    scanf("%d",&n);
    for(int a=1;a<=n;a++) 
    subs(); 
}

void subs(){
    int x;
    i++;
    if((i<10 || i>20) && i%10==1 && !((x=i%100) && x/10==1)){
        printf("I am called %dst time.\n",i);
        if(i==n) printf("Hello:I am called %dst time.\n",i);
    }
    else if((i<10 || i>20) && i%10==2 && !((x=i%100) && x/10==1)){
        printf("I am called %dnd time.\n",i);
        if(i==n) printf("Hello:I am called %dnd time.\n",i);
    }
    else if((i<10 || i>20) && i%10==3 && !((x=i%100) && x/10==1)){ 
        printf("I am called %drd time.\n",i);
        if(i==n) printf("Hello:I am called %drd time.\n",i);
    }
    else if(i%10==0 || i%10>=4 || (x=i%100 && x/10==1)){
        printf("I am called %dth time.\n",i);
        if(i==n) printf("Hello:I am called %dth time.\n",i);
    }
}

