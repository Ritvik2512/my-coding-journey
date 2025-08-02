//different ways to declare string
#include <stdio.h>
int main()
{
    char name[5] = {'C' , 'O' , 'M' , 'P' , '\0'};
    char bookName[14] = "Atomic Habits";
    char dishName[] = "Bread";
    char *ptr = "Paneer";

    printf("Name : %s",name); //%s is used as placeholder for string
    printf("\nBook : %s",bookName);
    printf("\nDish : %s",dishName);
    printf("\n*ptr : %s",ptr);
}