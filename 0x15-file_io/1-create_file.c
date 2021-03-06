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
 * create_file - a function that creates a file
 *
 * @filename: the name of the file to be created
 *
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: returns 1 on success
 * or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
ssize_t fd;
ssize_t len = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content != NULL)
len = write(fd, text_content, _strlen(text_content));
close(fd);
if (len == -1)
return (-1);
return (1);
}
