#include "holberton.h"

/**
 * print_line - function to draw a straight line in the terminal
 *
 * @n: integer to control the length of the line
 */
void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
if (i != 0 && i > 0)
{
_putchar(95);
 }
}
_putchar('\n');
}
