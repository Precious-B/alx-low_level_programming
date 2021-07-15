#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: a pointer to the size of the array
 *
 * @c: a pointer to the array
 *
 * Return: to return a pointer to the array
 * or null if the size of the array is 0
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
if (size != 0)
{
a = malloc(size * sizeof(c));
}
else
{
return (NULL);
}
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
a[i] = c;
}
return (a);
}
