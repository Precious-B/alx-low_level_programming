#include "holberton.h"

/**
 * print_triangle - function to print a triangle
 *
 * @size: to control the size of the triangle
 */
int print_triangle(int size)
{
int i = 0, j = 0;
while (i < size)
{
j = 0;
while (j <= size)
{
if (j != 0)
{
_putchar(35);
}
j++;
}
_putchar('\n');
i++;
}
if (size == 0)
{
_putchar('\n');
}
}
