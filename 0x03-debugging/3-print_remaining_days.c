#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
if (month > 2)
{
day++; /* Adjust for the extra day in a leap year */
}
if (day > 60)
{
printf("Day of the year: %d\n", day - 1); /* Adjust for the extra day in a leap year */
printf("Remaining days: %d\n", 366 - day);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
}
else
{
if (day > 59) /* February 29th is invalid in non-leap years */
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
