#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: a pointer to a string to be concatenated
 *
 * @s2: a pointer to a string to be concatenated
 *
 * Return: on success, returns a pointer
 * and on error, returns NULL
 */
char *str_concat(char *s1, char *s2)
{
char *a;
int i, length, length2, total_len;
int j = 0;
for
(i = 0;
s1[i] != '\0';
i++);
length = i;
for
(i = 0;
s2[i] != '\0';
i++);
length2 = i;
total_len = length + length2 + 1;
a = malloc(total_len);
if (a == NULL)
{
return (NULL);
}
if (s1 == NULL)
a[j] = *s1;
if (s2 == NULL)
a[j] = *s2;
while (*s1 != '\0')
{
a[j] = *s1;
s1++;
j++;
}
while (*s2 != '\0')
{
a[j] = *s2;
s2++;
j++;
}
a[j] = '\0';
return (a);
}
