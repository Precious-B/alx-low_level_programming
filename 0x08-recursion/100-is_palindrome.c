#include "holberton.h"

/**
 * is_pal_rec - a function to check whether a string is palindrome or not
 *
 * @s: a string to be checked
 *
 * @i: an integer to help with the comparison
 *
 * @j: an integer to help with the comparison
 *
 * Return: to return 1 if @s is a palindrome
 * and 0 if @s is not a palindrome
 */
int is_pal_rec(char *s, int i, int j)
{
if (i >= j)
return (1);
if (s[i] != s[j])
return (0);
if (j < j + 1)
return (is_pal_rec(s, i + 1, j - 1));
return (1);
}

/**
 * s_len - function to check length of string
 *
 * @s: string to be checked
 *
 * Return: to return the length of a string
 */
int s_len(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + s_len(s + 1));
}

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome and 0 if not
 *
 * @s: a pointer to the string to be checked
 *
 * Return: to return 1 if @s is a palindrome
 * and to return 0 if @s is not a palindrome
 */
int is_palindrome(char *s)
{
int n = s_len(s);
if (s == 0)
return (1);
return (is_pal_rec(s, 0, n - 1));
}
