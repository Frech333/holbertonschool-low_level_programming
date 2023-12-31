#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height);

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the allocated 2D array,
 *         or NULL on failure or if width/height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
/* Free previously allocated memory */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}

for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
