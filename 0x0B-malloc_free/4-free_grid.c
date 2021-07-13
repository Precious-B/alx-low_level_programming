#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by the alloc_grid function
 *
 * @grid: a pointer to a pointer of a function
 *
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
int i;
i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
