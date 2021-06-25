#include "holberton.h"

/**
 * print_diagonal - function to draw a diagonal line on the terminal
 *
 * @n: integer to control the number of diagonal lines drawn
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= i; j++)
{
if ((j != i && j != 0) && j > 0)
{
_putchar(' ');
}
if ((j == i && j != 0) && j > 0)
{
_putchar(92);
_putchar('\n');
}
}
if ((n == 0 || n < 0) || n < -1)
{
_putchar('\n');
}
}
if (n <= -1)
_putchar('\n');
}
