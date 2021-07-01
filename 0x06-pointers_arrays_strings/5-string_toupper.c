#include "holberton.h"

/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase
 *
 * @ch: a pointer to the string to be changed to uppercase
 *
 * Return: to return the string in uppercase
 */
char *string_toupper(char *ch)
{
char *s = ch;
int i, j, length;
for
(i = 0;
ch[i] != '\0';
i++);
length = i;
for (j = 1; j < length; j++)
{
if (ch[j] >= 'a' && ch[j] <= 'z')
ch[j] = ch[j] - 32;
}
return (s);
}
