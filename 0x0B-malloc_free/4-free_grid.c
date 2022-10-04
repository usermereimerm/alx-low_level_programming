#include "main.h"

/**
 * free_grid - frees space allocted for a
 * two-dimensional array
 * @grid: grid  to be freed
 * @height: number of rows in grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
