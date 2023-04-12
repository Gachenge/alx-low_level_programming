#include "search_algos.h"
/**
* linear_search - search for something linearly
* @array: the search zone
* @size: size of array
* @value: item to search for
* Return: either index or negative 1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
