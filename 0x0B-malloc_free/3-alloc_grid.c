#include <stdlib.h>

/**
 * alloc_grid - 2D array
 * @width: columns
 * @height: rows
 * Return: null
 */

int ** alloc_grid(int width, int height)
{
	int **a, i;

	a = malloc(width * sizeof(int*));

	for (i = 0; i < width; i ++)
	{
		a[i] = (int*)malloc(height * sizeof(int));
	}
	return (a);
}
