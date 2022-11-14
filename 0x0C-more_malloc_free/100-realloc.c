#include "main.h"

/**
 * _realloc - old and new size
 * @ptr: pointer to old mem
 * @old_size: former
 * @new_size: towards
 * Return: the point?
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *arr;
	int diff;

	if (new_size == 0 && ptr)
		return (NULL);
	diff = new_size - old_size;

	if (diff <= 0)
		return (NULL);
	else
	{
		arr = malloc(sizeof(int) * new_size);
		if (!arr)
			return (NULL);
		return (arr);
	}
	return (ptr);
}
