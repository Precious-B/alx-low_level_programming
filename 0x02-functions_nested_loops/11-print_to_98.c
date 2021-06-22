#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers from n to 98
 *
 * @n: integer to print
 */
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
if (i == 98)
{
printf("\n");
}
}
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
if (i == 98)
{
printf("\n");
}
}
}
