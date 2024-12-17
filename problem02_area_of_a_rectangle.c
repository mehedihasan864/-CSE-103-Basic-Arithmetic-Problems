#include <stdio.h>

int main()
{
   int length , width , area;
   area = length*width;
   printf("Enter the value of length :");
   scanf("%d",&length);
   printf("Enter the value of width :");
   scanf("%d", &width);
   printf("The area of the rectangle  %d\n", length*width);
    return 0;
}