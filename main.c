#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "prime.h"
#include "calendar.h"
#include "min_max.h"
#include "odd_even.h"
#include "calc.h"


int validate(char *a);

int main()
{
    int choice = 1, con = 1;
    unsigned int i;
    int rol = 0;
    char buffer[BUFSIZ];
    printf("1: Display the calendar of the month\n2: Calculator\n3: Find prime number from a list \n4: Find odd and even numbers from a list\n5: Find a minimum and maximum numbers from a list\n6: Exit the program\n\n");
    while (con == 1)
    {
        if (fgets(buffer, sizeof buffer, stdin) != NULL)
        {
            if (choice > 6 || choice < 1)
                printf("Please chose a valid option\n\n1: Display the calendar of the month\n2: Calculator\n3: Find prime number from a list \n4: Find odd and even numbers from a list\n5: Find a minimum and maximum numbers from a list\n6: Exit the program\n\n");
            else if(rol > 0)
                printf("1: Display the calendar of the month\n2: Calculator\n3: Find prime number from a list \n4: Find odd and even numbers from a list\n5: Find a minimum and maximum numbers from a list\n6: Exit the program\n\n");
            buffer[strlen(buffer) - 1] = '\0';
            if (validate(buffer) == 0)
            {
                rol++;
                choice = atoi(buffer);
                switch (choice)
                {
                case 1:
                    startCalendar();
                    break;

                case 2:
                    calc();
                    break;

                case 3:
                    prime();
                    break;

                case 4:
                    oddEven();
                    break;

                case 5:
                    minMax();
                    break;

                case 6:
                    printf("thanks see you again\n");
                    con = 0;
                    break;
                default:
                    choice = 99;
                    break;
                }
            }
            else
                printf("Error: Input validation\n");
        }
        else
            printf("Error reading input\n");

        printf("\n");
    }
}

int validate(char *a)
{
    unsigned x;
    for (x = 0; x < strlen(a); x++)
        if (!isdigit(a[x]))
            return 1;

    return 0;
}


