#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square matrix of integers
 *
 * @a: a pointer to an integer
 *
 * @size: the size of the integer
 */
void print_diagsums(int *a, int size)
{
int i, j, sum;
sum = 0;
for (i = 0; i < size; i++)
sum = sum + *(a + i * size + i);
printf("%i, ", sum);
sum = 0;
for (j = 0; j < size; j++)
sum = sum + *(a + size * (j + 1) - (j + 1));
printf("%i\n", sum);
}
