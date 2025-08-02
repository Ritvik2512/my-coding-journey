//program to calculate fine by accepting number of days late
#include <stdio.h>
int main()
{
    //declaration 
    int days;
    int charge;

    //input from user
    printf("Enter number of days late : ");
    scanf("%d" , &days);

    //computation
    if (days <= 5)
    {
        charge = 40 * days;
    }

    else if (days > 5 && days <=10)
    {
        charge = 65 * days;
    }

    else 
    {
        charge = 80 * days;
    }

    //output
    printf("Charge for %d days late = %d",days,charge);
}