#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: integer to be swapped with integer b
 *
 * @b: integer to be swapped with integer a
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
