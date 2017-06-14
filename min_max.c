#include "min_max.h"

int numbers[100];

int i, values, arrSize;

void minMax()
{
    printf("How many number do you want to comapare: ");

    scanf("%d", &arrSize);

    printf("Enter numbers \n");

    for (i = 0; i < arrSize; i++)
    {
        scanf("%d", &numbers[i]);
    }
    findMin();
    findMax();
}
/*
    Find Min
    child method of minMax()
*/
void findMin()
{
    values = numbers[0];

    for (i = 1; i < arrSize; i++)
    {
        if (numbers[i] < values)
        {
            values = numbers[i];
        }
    }

    printf("Minimum = %d \n", values);
}
/*
    Find Max
    child method of minMax()
*/
void findMax()
{
    values = numbers[0];

    for (i = 1; i < arrSize; i++)
    {
        if (numbers[i] > values)
        {
            values = numbers[i];
        }
    }
    printf("Maximum = %d\n", values);
}