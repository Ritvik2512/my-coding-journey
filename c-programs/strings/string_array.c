/**
 * 1. Program to create and store the names of 5 students in an array and display them in a list format
*/
#include <stdio.h>
int main()
{
  //decalring array of strings
  char names[5][30] = {"AS ", "AAJ ", "DR" , "PMV" , "SS"}; //arrayofstringsname[number of strings][length of each string]

  //output
  printf("\nNames of students : ");
  for (int i = 0; i < 5 ; i++)
  {
    printf("\n%d. %s",(i+1),names[i]);
  }
}