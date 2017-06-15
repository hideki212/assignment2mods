#include "calendar.h"
#define NULL 0
/*
    display calendar at m y
    child method of startCalender
*/
void calendar(int y, int m) 
{
    const char *NameOfMonth[] = {NULL /*dummp*/,
                                 "January", "February", "March", "April", "May", "June",
                                 "July", "August", "September", "October", "November", "December"};
    char Week[] = "Su Mo Tu We Th Fr Sa";
    int DayOfMonth[] =
        {-1 /*dummy*/, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int weekOfTopDay;
    int i, day;

    weekOfTopDay = days(y, m, 1) % 7;
    if (isLeapYear(y))
        DayOfMonth[2] = 29;
    printf("\n     %s %d\n%s\n", NameOfMonth[m], y, Week);

    for (i = 0; i < weekOfTopDay; i++)
        printf("   ");
    for (i = weekOfTopDay, day = 1; day <= DayOfMonth[m]; i++, day++)
    {
        printf("%2d ", day);
        if (i % 7 == 6)
            printf("\n");
    }
    printf("\n");
}

/*
    True if leap year
    child method of calender
*/

int isLeapYear(int y)
{
    return (y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0));
}

/*
    The number of leap year
    child method of calender
*/
int leapYears(int y)
{
    return y / 4 - y / 100 + y / 400;
}

/*
    number of days since the beginning of the year
    child method of calender
*/
int todayOf(int y, int m, int d)
{
    static int DayOfMonth[] =
        {-1 /*dummy*/, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    return DayOfMonth[m] + d + ((m > 2 && isLeapYear(y)) ? 1 : 0);
}
/*
    Total number of days
    child method of calender
*/
long days(int y, int m, int d) /* Total number of days */
{
    int lastYear;

    lastYear = y - 1;

    return 365L * lastYear + leapYears(lastYear) + todayOf(y, m, d);
}
/*
    Start calender functionality here
    has 1 child method called Calender()
*/
void startCalendar()
{

    int year, month, con = 1;
    while(con == 1){
        printf("Enter the month 1 -12 and year 1970 - 2038: ");
        scanf("%d %d", &month, &year);
        if(month <= 12 && month >= 1){
            if(year <= 2038 && year >= 1970){
                calendar(year, month);
                con = 0;
            }else{
                printf("please input a year between 1970 - 2038\n");
            }
        }else{
            printf("please input a month between 1 - 12\n");
        }
    }
}
