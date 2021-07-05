#include "holberton.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: a pointer to the string
 *
 * @c: a character to be located in the string @s
 *
 * Return: to return a pointer to the first occurrence of the character @c
 * to return NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
char *ch = s;
int i, j, length;
for (i = 0; ch[i] != '\0'; i++);
length = i;
for (j = 0; j < length; j++)
{
if (ch[j] == c)
return (ch);
}
if (ch[j] != c)
{
return (0);
}
else
return (ch);
}