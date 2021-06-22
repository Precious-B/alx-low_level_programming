#include "holberton.h"
#include <limits.h>

/**
 * print_last_digit - to print last digit of a number
 *
 * @n: the number to be printed
 *
 * Return: to return the value of n
 */
int print_last_digit(int n)
{
int lastDigit;
if (n < 0)
{
n = (-1) * n;
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
if (n == INT_MIN)
{
_putchar('8');
return (8);
}
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
