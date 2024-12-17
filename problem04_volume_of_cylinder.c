// Find the volume of the cylinder
#include <stdio.h>

int main()
{
   float pi =3.1416 , r , h , volume;
   printf("Enter the value of r : ");
   scanf("%f", &r);
   printf("Enter the value of h : ");
   scanf("%f", &h);
   volume = pi*r*r*h;
   printf("The volume of the cylinder is %f\n", volume );
    return 0;
}