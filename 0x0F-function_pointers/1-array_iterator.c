#include "function_pointers.h"

/**
 * array_iterator - function pointers and iteration
 * @array: the array
 * @size: size of array
 * @action: the function
 * Return: what
 */

void array_iterator(int *array, size_t size,void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
