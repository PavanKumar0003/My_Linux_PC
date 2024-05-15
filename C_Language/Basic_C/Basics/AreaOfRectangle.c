/*calculate and print area and perimeter of a rectangle*/
#include<stdio.h>

int main()
{
    int l,w;
    float perimeter,Area;
    printf("Enter Length, width:");
    scanf("%d%d", &l,&w);
    perimeter = (2*l) + (2*w);
    Area = l*w;
    printf("Perimeter is = %f \n", perimeter);
    printf("Area is = %f \n", Area);
    return 0;
}