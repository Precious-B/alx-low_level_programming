#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 * Or returns 0 if there is one or more chars
 * in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int dec, i;
for (dec = 0, i = 0; b[i] != '\0'; i++)
{
if (b[i] == '1')
{
dec = (dec << 1) | 1;
}
else if (b[i] == '0')
{
dec <<= 1;
}
else if (b[i] != '0' && b[i] != '1')
{
return (0);
}
}
return (dec);
}
