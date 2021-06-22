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
long int lastDigit1;
if (n < 0)
{
n = (-1) * n;
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
if (n >= INT_MIN)
{
lastDigit1 = n;
lastDigit1 = (-1) * lastDigit1;
_putchar(lastDigit1 % 10 + '0');
}
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
