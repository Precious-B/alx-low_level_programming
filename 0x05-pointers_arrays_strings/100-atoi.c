#include "holberton.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: pointer to a string
 */
int _atoi(char *s)
{
int res = 0;
int i = 0;
int sign = 1;
if (s[i] == '-')
{
sign = -1;
i++;
}
for (i = 0; s[i] != '\0'; i++)
{
res = res * 10 + s[i] - '\0';
if (sign = -1)
{
return (sign * res);
}
else
{
return (res);
}
}
}
