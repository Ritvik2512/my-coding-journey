//program to calculate charge for parcel taking weight of parcel as input
#include <stdio.h>
int main()
{
    //declaration
    int weight;
    int price;

    //input from user
    printf("Enter weight of parcel(in kg) : ");
    scanf("%d" , &weight);

    //computation
    if (weight <= 10)
    {
        price = 20 * weight;
    }

    else if (weight > 10 && weight <= 30)
    {
        price = (20 * 10) + ((weight - 10) * 15);
    }

    else if (weight > 30 && weight <= 60)
    {
        price = (20 * 10) + (15 * 20) + (10 * (weight - 30));
    }

    else if (weight > 60)
    {
        price = 5 * weight;
    }

    //output
    printf("Charge for parcel of weight %d = %d",weight,price);
}