#include "holberton.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 *
 * @s: a pointer to the string to be printed
 *
 * _putchar - to print the string
 */
void _puts_recursion(char *s)
{
int i = 0;
_putchar(*s);
s++;
if (s[i] != '\0')
{
_puts_recursion(s);
}
else
_putchar('\n');
}
