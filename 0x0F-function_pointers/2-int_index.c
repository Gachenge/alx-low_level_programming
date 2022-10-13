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
	int i, j;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				j = i;
				break;
			}
			else
				j = -1;
		}
	}
	return (j);
}
