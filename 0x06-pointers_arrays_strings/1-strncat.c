#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: a pointer to the string to be concatenated
 *
 * @src: the source string to be added
 *
 * @n: an integer controlling the amount of bytes to be added
 *
 * Return: to return a pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for
(index = 0;
index < n && src[n] != '\0';
index++)
dest[dest_len++] = src[index];
return (dest);
}
