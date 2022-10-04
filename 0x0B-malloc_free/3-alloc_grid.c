#include <stdlib.h>

/**
 * alloc_grid - 2D array
 * @width: columns
 * @height: rows
 * Return: null
 */

int **alloc_grid(int width, int height)
{
	int **a, i;

	a = malloc(sizeof(int*) * width);
	for (i = 0; i < width; i++)
		a[i] = malloc(sizeof(int) * height);
	return (a);
}
