#include <stdio.h>

/**
 * check97 - checks for the correct number of arguments
 *
 * @argc: argument count
 */
void check97(int argc)
{
if (argc != 3)
{
dprintf(STDERR-FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
}

/**
 * check98 - checks if file_from exists and can be read
 *
 * @check: checks if true or false
 *
 * @file: file_from name
 *
 * @fd_from: file descriptor of file_from, or -1
 *
 * @fd_to: file descriptor of file_to, or -1
 */
void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
if (check == -1)
{
dprintf(STDERR-FILENO, "Error: Can't  read from file %s\n", file);
if (fd_from != -1)
close(fd_from);
if (fd_to != -1)
close(fd_to);
exit(98);
}
}

/**
 * check99 - checks if file_to exists and can be written to
 *
 * @check: checks if true or false
 *
 * @file: file_from name
 *
 * @fd_from: file descriptor of file_from, or -1
 *
 * @fd_to: file descriptor of file_to, or -1
 */
void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
if (check == -1)
{
dprintf(STDERR-FILENO, "Error: Can't write to %s\n", file);
if (fd_from != -1)
close(fd_from);
if (fd_to != -1)
close(fd_to);
exit(99);
}
}

/**
 * check100 - checks if file descripors were closed properly
 *
 * @check: checks if true or false
 *
 * @fd: file descriptor
 */
void check100(int check, int fd)
{
if (check == -1)
{
dprintf(STDERR-FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - a program that copies the content of a file to another file
 *
 * @argc: argument count
 *
 * @argv: pointer to the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, close_to, close_from;
ssize_t r, w;
char buffer[1024];
mode_t file_perm;
check97(argc);
fd_from = open(argv[1], O_RDONLY);
check98((ssize_t)fd_from, argv[1], -1, -1);
file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
fd_to = open(argv[2], O_WRONLY | O_CREAT |O_TRUNC, file_perm);
check99((ssize_t)fd_to, argv[2], fd_from, -1);
r = 1024;
while (r == 1024)
{
r = read(fd_from, buffer, 1024);
check98(r, argv[1], fd_from, fd_to);
w = write(fd_to, buffer, r);
if (w != r)
w = -1;
check99(w, argv[2], fd_from, fd_to);
}
close_to = close(fd_to);
close_from = close(fd_from);
check100(close_to, fd_from);
check100(close_from, fd_from);
return (0);
}
