#include "main.h"

/**
 * array_range - array fromm min
 * @min: smallest element
 * @max: largest element
 * Return: always 0
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = min ; i != max; i++)
		arr[i] = i;
	return (arr);
}
