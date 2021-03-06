#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * my_memmset - a funstion that initializes an array with a value
 *
 * @b: a pointer to an array
 *
 * @c:
 *
 * @len: length of the array
 *
 * Return: to return an initialized array
 */
void *my_memset(void *b, int c, int len)
{
  unsigned char *p = b;
  while (len > 0)
    {
      *p = c;
      p++;
      len--;
    }
  return (b);
}

int main(void)
{
int *c[5];
int *a = c;
my_memset(a, 0, 5 * sizeof(c));
printf("%d\n", a);
return (0);
}
