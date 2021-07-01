#include "holberton.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: pointer to the array whose contents are to be reversed
 *
 * @n: an integer to specify the size of the array
 */
void reverse_array(int *a, int n)
{
int i;
for (i = 0; i < n / 2; i++)
{
char rev = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = rev;
}
}
