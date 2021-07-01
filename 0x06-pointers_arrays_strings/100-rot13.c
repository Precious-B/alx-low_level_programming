#include "holberton.h"

/**
 * rot13 - a function that encodes a string using rot 13
 * @s: a pointer to the string
 * Return: to return the results
 */
char *rot13(char *s)
{
int count = 0, i;
char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (s[count] != '\0')
{
i = 0;
while (letters[i] != '\0')
{
if (s[count] == letters[i])
{
s[count] = rot[i];
break;
}
i++;
}
count++;
}
return (s);
}
