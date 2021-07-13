#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: a pointer to the string
 *
 * Return: on success, returns a pointer to the duplicated string
 * and on error, returns NULL
 */
char *_strdup(char *str)
{
int i, length, index;
char *dest;
if (str == NULL)
{
return (NULL);
}
for
(i = 0;
str[i] != '\0';
i++);
length = i;
dest = malloc(length + 1);
if (dest == NULL)
{
return (NULL);
}
for
(index = 0;
index < length && str[index] != '\0';
index++)
{
dest[index] = str[index];
}
while (index < length)
{
dest[index++] = '\0';
}
return (dest);
}
