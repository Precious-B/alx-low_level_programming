#include "holberton.h"

/**
 * _isupper - function to check for uppercase character
 *
 * @c: the variable to be checked
 * Return: to return 1 if character if uppercase
 * and to return 0 if character is lowercase.
 */
int _isupper(int c)
{
char ch = c;
if (ch >= 65 || ch <= 90)
{
return (1);
}
else
{
return (0);
}
}
