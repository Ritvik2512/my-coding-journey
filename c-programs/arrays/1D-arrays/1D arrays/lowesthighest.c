#include <stdio.h>
int main()
{
    int lowest,lowestindex=0,highest,highestindex=0,secondhighest,secondhighestindex=0,secondlowest,secondlowestindex=0,n;

    printf("enter array size\n");
    scanf("%d",&n);

    int array[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    highest=array[0];
    lowest=array[0];
    secondhighest=array[0];
    secondlowest=array[0];
    for(int i=0;i<n;i++)
    {
        if (array[i] > highest)
        {
            secondhighest = highest;
            highestindex = i;

            highest = array[i];
        }
        
        else if (array[i] > secondhighest && array[i]<highest)
        {
            secondhighest = array[i];
            highestindex = i;
        }
        
    }

    for(int i=0;i<n;i++)
    {
         if (array[i] < lowest)
        {
            secondlowest = lowest;
            lowestindex = i;

            lowest = array[i];
        }

        else if (array[i] > secondlowest && array[i]<lowest)
        {
            secondlowest = array[i];
            lowestindex = i;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("highest=%d\n",highest);
    printf("secondhighest=%d\n",secondhighest);
    printf("lowest=%d\n",lowest);
    printf("secondlowest=%d\n",secondlowest);
}