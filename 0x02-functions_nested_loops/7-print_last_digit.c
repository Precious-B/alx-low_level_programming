#include "holberton.h"

/**
 * print_last_digit - to print last digit of a number
 *
 * @n: the number to be printed
 *
 * @lastDigit: last digit
 *
 * Return: to return the value of n
 */
int print_last_digit(int n)
{
int lastDigit;
if (n < 0)
{
n = (-1) * n;
}
lastDigit = n % 10;
_putchar(lastDigit);
return (lastDigit);
}
