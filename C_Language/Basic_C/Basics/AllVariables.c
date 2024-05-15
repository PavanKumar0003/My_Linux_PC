/*create variables of all data types and then read and print their values using scanf and printf.*/

#include<stdio.h>

int main()
{
    int a=0;
    unsigned int b=0;
    short signed int c=0;
    short unsigned int d=0;
    long signed int e=0;
    long unsigned int f=0;
    char signed g=0;
    unsigned char h=0;
    float i=0;
    double j=0;
    long double k=0;

    printf("the below are the variables\n");

    printf("Enter a value of \"Int\" data type:");
    scanf("%d",&a);
    printf("Enter a value of \"U.Int\" data type:");
    scanf("%u",&b);
    printf("Enter a value of \"S.Int\" data type:");
    scanf("%hd",&c);
    printf("Enter a value of \"S.U.Int\" data type:"); 
    scanf("%hu",&d);
    printf("Enter a value of \"L.Int\" data type:");
    scanf("%ld",&e);
    printf("Enter a value of \"L.U.Int\" data type:");
    scanf("%lu",&f);
    printf("Enter a value of \"Char\" data type:");
    scanf("%s",&g);
    printf("Enter a value of \"U.Char\" data type:");
    scanf("%s",&h);
    printf("Enter a value of \"float\" data type:");
    scanf("%f",&i);
    printf("Enter a value of \"double\" data type:");
    scanf("%lf",&j);
    printf("Enter a value of \"L.double\" data type: ");
    scanf("%Lf",&k);

    //Printing all the data types 
    printf("\"Int\" data type:%d \n",a);
    printf("\"U.Int\" data type:%u \n",b);
    printf("\"S.Int\" data type:%d \n",c);
    printf("\"S.U.Int\" data type:%hu \n",d);
    printf("\"L.Int\" data type:%ld \n",e);
    printf("\"L.U.Int\" data type:%lu \n",f);
    printf("\"Char\" data type:%c \n",g);
    printf("\"U.char\" data type:%c \n",h);
    printf("\"float\" data type:%f \n",i);
    printf("\"double\" data type:%lf \n",j);
    printf("\"long double\" data type:%Lf \n",k);

    return 0;
}