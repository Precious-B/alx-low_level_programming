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
long int lastDigit1 = n;
if (n < 0)
{
n = (-1) * n;
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
if (lastDigit2 >= INT_MIN)
{
lastDigit2 % 10;
_putchar(lastDigit1 + '0');
}
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
