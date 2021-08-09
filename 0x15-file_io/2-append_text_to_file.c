#include "holberton.h"
#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: a pointer to the string that will be used in the function
 *
 * Return: to return the length of a string
 */
int _strlen(char *s)
{
int i;
for
(i = 0;
s[i] != '\0';
i++);
return (i);
}

/**
 * append_text_to_file - a function that appends text at the end of a file
 *
 * @filename: the name of the file
 *
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: returns 1 on success
 * Or returns -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t fd, w;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content != NULL)
w = write(fd, text_content, _strlen(text_content));
close(fd);
if (w == -1)
return (-1);
return (1);
}
