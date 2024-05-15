/*calculate and print area and perimeter of a Circle*/
#include<stdio.h>

int main()
{
    float perimeter,Area,PI=3.47,Radius;
    printf("Enter Radius:");
    scanf("%f", &Radius);
    perimeter = 2*PI*Radius;
    Area = PI*Radius;
    printf("Perimeter is = %f \n", perimeter);
    printf("Area is = %f \n", Area);
    return 0;
}