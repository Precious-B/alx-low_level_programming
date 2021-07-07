#include "holberton.h"

/**
 * s_len - a function to check the length of a string
 *
 * @s: the string to be checked
 *
 * Return: to return the length of the string
 */
int s_len(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + s_len(s + 1));
}

/**
 * wildcmp - a function that compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 *
 * @s1: a pointer to a string to be compared to @s2
 *
 * @s2: a pointer to a string to be compared to @s1
 *
 * Return: to return 1 if the strings @s1 and @s2 can be considered identical
 * and to return 0 if they are not
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s1 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
return (1);
}
return (0);
}
