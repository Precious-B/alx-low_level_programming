#include "holberton.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 *
 * @str: the pointer to the string to be printed
 */
void puts2(char *str)
{
int i, j, length;
for
(i = 0;
str[i] != '\0';
i++);
length = i;
for
(j = 0;
j < length;
j += 2)
{
_putchar(str[j]);
}
_putchar('\n');
}
