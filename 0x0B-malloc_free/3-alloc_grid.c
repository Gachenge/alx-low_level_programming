#include <stdlib.h>

/**
 * alloc_grid - 2D array
 * @width: columns
 * @height: rows
 * Return: null
 */

int ** alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	a = malloc(width * sizeof(int*));
	if (a == NULL)
		{
			return (NULL);
			free(a);
		}
	for (i = 0; i < height; i++)
	{
		a[i] = (int*)malloc(sizeof(int) * width);
		if (a[i] == NULL)
			free(a);
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
