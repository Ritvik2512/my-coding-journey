/**
 * Program to prompt and accept name , age and marks of 5 students and display them
 * use structures
 */
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[30];
    int age;
    float marks;
};

int main()
{
    struct Student s[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d : ",(i + 1));

        printf("\nEnter name : ");
        scanf("%s",&s[i].name);

        printf("\nEnter age : ");
        scanf("%d",&s[i].age);

        printf("\nEnter marks :");
        scanf("%f",&s[i].marks);
    }

    //output
    for (int i = 0; i < 5; i++)
    {
        printf("\n%s",s[i].name);
        printf("\n%d",s[i].age);
        printf("\n%.2f",s[i].marks);
    }
}