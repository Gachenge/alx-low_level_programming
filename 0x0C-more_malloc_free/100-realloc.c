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
	unsigned int *arr, i;

	if (new_size > old_size)
		old_size = new_size;
	if (new_size == old_size)
	{
		return (ptr);
		free(ptr);
	}

