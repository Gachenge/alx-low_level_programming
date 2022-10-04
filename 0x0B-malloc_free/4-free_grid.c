#include "main.h"

/**
 * free_grid - free malloc
 * @grid: double pointer
 * @height: how high
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
