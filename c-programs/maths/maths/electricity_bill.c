//program to calculate electricity bill
#include <stdio.h>
int main()
{
    //declaration
    char Name;
    int consumer;
    float units;
    float bill;

    //input from user
    printf("Enter customer name : ");
    scanf("%c" , &Name);

    printf("Enter consumer number : ");
    scanf("%d" , &consumer);

    printf("Enter units consumed : ");
    scanf("%f" , &units);

    //computation
    if (units <= 100)
    {
        bill = 0.8 * units;
    }

    else if (units > 100 && units <= 200)
    {
        bill = (0.8 * 100) + (1 * (units - 100));
    }

    else if (units > 200)
    {
        bill = (0.8 * 100) + (1 * 200) + (1.25 * (units - 300));
    }

    //output
    printf("Name - %c",Name);
    printf("\nConsumer number - %d",consumer);
    printf("\nAmount to be paid - %f",bill);
}