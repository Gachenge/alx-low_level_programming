#include <stdlib.h>

/**
 * alloc_grid - 2D array
 * @width: columns
 * @height: rows
 * Return: null
 */

int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	a = (int **)malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
