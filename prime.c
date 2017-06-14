#include "prime.h"

/*
    Check for prime number
    Child method to prime()
*/
int checkPrimeNumber(int number)
{
    int j, found = 1;

    for (j = 2; j <= number / 2; ++j)
    {
        if (number % j == 0)
        {
            found = 0;
            break;
        }
    }

    return found;
}

/*
    Get prime number
    has 2 child methods
*/
void prime()
{
    int number1, number2, i, found;

    printf("Enter two positive integers: ");
    scanf("%d %d", &number1, &number2);

    printf("Prime numbers in range %d and %d are:\n", number1, number2);

    for (i = number1 + 1; i < number2; ++i)
    {
        found = checkPrimeNumber(i);

        if (found == 1)
            printf("%d ", i);
    }

    printf("\n");
}
