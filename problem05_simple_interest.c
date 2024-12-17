// Find the simple interest
#include <stdio.h>

int main()
{
    float principle , rate , time, simple_interest;
    printf("Enter the value of principle : ");
    scanf("%f", &principle);
    printf("Enter the value of rate : ");
    scanf("%f", &rate);
    printf("Enter the value of time : ");
    scanf("%f", &time);
     simple_interest=principle*rate*time/100;
     printf("The value of the simple interest is %f", simple_interest);
    return 0;
}