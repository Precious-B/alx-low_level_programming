#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 *
 * @n: the number to be manipulated
 *
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: returns 1 on success
 * or returns -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n &= ~(1 << index);
return (1);
}
