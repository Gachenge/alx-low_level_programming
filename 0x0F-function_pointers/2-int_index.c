#include "function_pointers.h"

/**
 * int_index - search for sth
 * @array: sth in this array
 * @size: how big array
 * @cmp: searcher
 * Return: o
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j, k;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
				break;
		}
		if (i < size)
			k = i;
	}
	else
		return (-1);
	return (k);
}
