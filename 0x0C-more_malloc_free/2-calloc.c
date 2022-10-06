#include "main.h"

/**
 * _calloc - malloc arrray
 * @nmemb: members of array
 * @size: how small
 * Return: nil
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(sizeof(int) * nmemb * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		arr[i] = nmemb;
	return (arr);
}
