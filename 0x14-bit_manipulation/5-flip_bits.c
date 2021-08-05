#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: the number to be flipped
 *
 * @m: the number to flip @n to
 *
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int count = 0;
while (n || m)
{
unsigned long int a = n & 1;
unsigned long int b = m & 1;
if (a != b)
count++;
n = n >> 1;
m = m >> 1;
}
return (count);
}
