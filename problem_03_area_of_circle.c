// Find the area of a circle
#include <stdio.h>

int main()
{
    float r, pi=3.1416 ,area;
    printf("Enter the value of r :");
    scanf("%f", &r);
    area= pi*r*r;
    printf("The area of the circle %f\n", area);
    return 0;
}