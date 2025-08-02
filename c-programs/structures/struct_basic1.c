/**
 * 1.Program to store name , age and marks of two students and display them
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
    struct Student s1 , s2;

    strcpy(s1.name,"A");
    s1.age = 15;
    s1.marks = 95.5;

    printf("Name : %s",s1.name);
    printf("\nAge : %d",s1.age);
    printf("\nmarks : %.2f",s1.marks);

    strcpy(s2.name,"B");
    s2.age = 20;
    s2.marks = 90.0;

    printf("\nName : %s",s2.name);
    printf("\nAge : %d",s2.age);
    printf("\nmarks : %.2f",s2.marks);
}