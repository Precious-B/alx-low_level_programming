#include "holberton.h"

/**
 * print_square - function to print a square
 *
 * @size: integer to control the size of the square
 */
void print_square(int size)
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
