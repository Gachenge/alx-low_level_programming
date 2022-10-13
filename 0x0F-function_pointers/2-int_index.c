#include "function_pointers.h"

/**
 * int_index - search for sth
 * @array: sth in this array
 * @size: how big array
 * cmp: searcher
 * Return: o
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
			continue;
		}
	}
	return (0);
}
