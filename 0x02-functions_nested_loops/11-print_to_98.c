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
while (n <= 98)
{
_putchar(i + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
i++;
}
while (i >= 98)
{
_putchar(i + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
i--;
}
}
