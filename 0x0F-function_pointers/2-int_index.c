#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 *
 * @array: the array
 *
 * @size: the size of the array
 *
 * @cmp: a pointer to the function
 *
 * Return: on success, returns the inteegers
 * and on failure, returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
