#include <stdio.h>
int main()
{
    //declaration
    int i , j , sum;
    int a[4][4] = {{10 , 20 , 30 , 40} , {11 , 12 , 13 , 14} , {20 , 30 , 40 , 50} , {10 , 50 , 20 , 30}};

    sum = 0;
    j = 3;

    //computation
    for (i = 0; i < 4; i++)
    {
        sum = sum + a[i][j];
        j--;
    }

    //output
    printf("The sum of the secondary diagonal elements is = %d",sum);
}