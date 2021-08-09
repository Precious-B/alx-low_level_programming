#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * struct size_t - file structure
 *
 * @filename: the file name
 *
 * @letters: the number of letters
 *
 * Description: file structure
 */
/**
typedef struct size_t
{
const char *filename;
struct size_t letters;
} ssize_t; */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* HOLBERTON_H */
