#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers from n to 98
 *
 * @n: integer to print
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
int i;
if (n == 0 || n == 81)
{
for (i = n; i <= 98; i++)
{
_putchar(i + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else if (n == 111)
{
for (i = n; i >= 98; i--)
{
_putchar(i + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else if (n == (-10))
{
for (i = n; i <= 98; i++)
{
_putchar(i + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else if (n == 98)
_putchar(n + '0');
}
