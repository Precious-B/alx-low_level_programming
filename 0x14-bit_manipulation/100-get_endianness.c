#include "holberton.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: returns 0 if big endian
 * Or returns 1 if little endian
 */
int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *) &x;
if (*c == 1)
return (1);
return (0);
}
