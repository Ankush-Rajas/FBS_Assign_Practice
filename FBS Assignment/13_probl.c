// Write a C program to convert a given number of days into years, weeks, and remaining days.

#include <stdio.h>

int main()
{
    int days, years, weeks, remaining_days;
    days = 366;
    years = days / 365;
    days = days % 365;

    weeks = days / 7;
    remaining_days = days % 7;

    printf("the years %d weeks %d remaining_days %d", years, weeks, remaining_days);

    return 0;
}