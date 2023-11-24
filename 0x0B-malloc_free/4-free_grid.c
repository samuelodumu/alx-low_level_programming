#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by the alloc_grid function
 *
 * @grid: pointer to first element in the array
 * @height: number of rows of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
