#include "holberton.h"

/**
 * print_triangle - function to print a triangle
 *
 * @size: to control the size of the triangle
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
int i, j, k;
for (i = 0; i <= size; i++)
{
for (j = 0;  j <= size - 1; j++)
{
if (j != 0)
{
_putchar(' ');
}
}
for (k = 0; k <= i * 2 - 1; k++)
{
if (k != 0)
{
_putchar(35);
}
}
_putchar('\n');
}
 
}
