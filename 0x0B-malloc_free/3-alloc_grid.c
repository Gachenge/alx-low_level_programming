#include <stdlib.h>

/**
 * alloc_grid - 2D array
 * @width: columns
 * @height: rows
 * Return: null
 */

int **alloc_grid(int width, int height)
{
	int *a, i, **j;

	if (width < 1 || height < 1)
		return (NULL);

	a = malloc(sizeof(int) * width * height);

	j = malloc(sizeof(int *) * width);
	for (i = 0; i < width; i++)
		j[i] = a + (i * height);
	return (j);
}
