/*calculate and print area and perimeter of a square*/
#include<stdio.h>

int main()
{
    int s1,s2,s3,s4;
    float perimeter,Area;
    printf("Enter side1,side2,side3,side4:");
    scanf("%d%d%d%d", &s1,&s2,&s3,&s4);
    perimeter = s1*s2*s3*s4;
    Area = s1*s2;
    printf("Perimeter is = %f \n", perimeter);
    printf("Area is = %f \n", Area);
    return 0;
}