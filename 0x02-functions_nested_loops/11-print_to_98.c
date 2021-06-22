#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers from n to 98
 *
 * @n: integer to print
 */
void print_to_98(int n)
{
while (n <= 98)
{
_putchar(n + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n++;
}
while (n >= 98)
{
_putchar(n + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n--;
}
}
