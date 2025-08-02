//program to calculate annual tax to be paid by person
#include <stdio.h>
int main()
{
    //declaration
    int salary;
    int tax;

    //input from user
    printf("Enter salary : ");
    scanf("%d" , &salary);

    //computation
    if (salary <= 50000)
    {
        tax = (5 / 100) * salary;
    }

    else if (salary > 50000 && salary <= 125000)
    {
        tax = (10 / 100) * salary;
    }

    else 
    {
        tax = (20 / 100) * salary;
    }

    //output
    printf("Income tax payable on salary of %d is = %d",salary,tax);
}