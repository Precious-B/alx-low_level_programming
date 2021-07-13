#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * @width: a pointer to the width of the array
 *
 * @height: a pointer to the height of the array
 *
 * Return: on success, returns the array value
 * and on error, returns NULL
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
i = 0;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(*grid));
if (grid == NULL)
{
free(grid);
return (NULL);
}
while (i < height)
{
grid[i] = malloc(width * sizeof(**grid));
if (grid[i] == NULL)
{
i--;
while (i >= 0)
{
free(grid[i]);
i--;
}
free(grid);
return (NULL);
}
j = 0;
while (j < width)
{
grid[i][j] = 0;
j++;
}
i++;
}
i = 0;
return (grid);
}
