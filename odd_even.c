#include "odd_even.h"
/*
    Input odd even numbers
*/
void oddEven()
{
    int number1, number2, i, found;

    printf("Enter two positive integers: ");
    scanf("%d %d", &number1, &number2);

    printf("Odd even in range %d and %d are:\n", number1, number2);

    for (i = number1 + 1; i < number2; ++i)
    {
        if (i % 2 == 0)
            getEven(i);
        else
            getOdd(i);

        printf("\n");
    }

    printf("\n");
}
/*
    Find odd number function
*/
void getOdd(int number)
{
    printf("%d is odd.", number);
}
/*
    Find Even number function
*/
void getEven(int number)
{
    printf("%d is even.", number);
}
/*
    Input Odd Even
*/