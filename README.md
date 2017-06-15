# assignment2

in the event of code change and needed recompiling use the following command line 
  gcc main.c prime.c calendar.c odd_even.c min_max.c calc.c -o main

included in this code is 
- basic menu 
- basic calculator 
- print monthly calendar
- find min max of array of given numbers
- odd even number in rage of given numbers
- find prime numbers in rage of given numbers 

in any case of creating new methods remember to add the prototype values into the respective header (.h) file

libraries used are:

	<stdio.h>`
	<ctype.h>
	<stdlib.h>
	<string.h>

header files included:
	"prime.h"
	"calendar.h"
	"min_max.h"
	"odd_even.h"
	"calc.h"

---------How it works-----------

we have seperated the code into different .c files for the sake of tidy code

Main.c contains:

- basic menu
	inclosed in a while loop till user exits
	uses a switch case statement
	
- validaton 
	instead of scanf we use fgets to verify that a int is entered to prevent overflow

calc.c contains 

- caluclator 
	basic fucntions for a calculator usning symbols i.e -, + , /, x
	contains 6 methods

calendar.c contains:

- calendar
	validation on user input on month no less then 1 and no grater then 12, year no less then 1970 and no greater then 2038
	finds the start of day of the year and the start day of the week 
	finds leap years and then sets the days in feb to 29 

min_max.c contains:

- minmax
	user enters the size of the array x
	inputs x numbers
	finds the min and max of the given numbers

odd_even.c contains:

-oddeven 
	user enters 2 numbers
	program finds all the odd & even numbers between the 2 given numbers

prime.c
	
- primenumbers
	user enters 2 numbers
	program finds all the prime numbers between the 2 given numbers
