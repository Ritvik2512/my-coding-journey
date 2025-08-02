#include <stdio.h>
int main()
{
    //declaration
    int i, j , sum;
    int a[4][4] = {{10 , 20 , 30 , 40} , {11 , 12 , 13 , 14} , {20 , 30 , 40 , 50} , {10 , 50 , 20 , 30}};
    
    sum = 0;
    //computation
    for (i = 0; i < 4; i++)
    {
        sum = sum + a[i][i];
    }

    //output
    printf("Sum of the principal diagonal elements is = %d",sum);
}