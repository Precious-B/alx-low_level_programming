#include "holberton.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: a pointer to the string
 *
 * Return: to return the length of a string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
return (_strlen_recursion(s + 1) + 1);
}
