#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 *
 * @n: the number to be printed
 *
 * @index: the index, starting from 0 of the bit to get
 *
 * Return: returns the value of the bit at index index
 * or returns -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
if ((n & (1 << index)) == 0)
return (0);
return (1);
}
