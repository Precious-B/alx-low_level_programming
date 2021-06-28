#include "holberton.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by a new line
 *
 * @s: pointer to the string to be printed
 */
void print_rev(char *s)
{
int i, j, length;
for (i = 0; s[i] != '\0'; i++);
length = i;
for
(j = length - 1;
j >= 0;
j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
