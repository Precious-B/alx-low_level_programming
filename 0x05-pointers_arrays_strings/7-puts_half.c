#include "holberton.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line
 *
 * @str: pointer pointing to the string to be printed
 */
void puts_half(char *str)
{
int i, j, n, length;
for
(i = 0;
str[i] != '\0';
i++);
length = i;
if ((length % 2) == 1)
{
n = (length - 1) / 2;
}
else
{
n = length / 2;
}
for
(j = n;
j < length;
j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
