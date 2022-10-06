#include "main.h"
/**
 * malloc_checked - check for malloc failure
 * @b: unsigned
 * Return: nil
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
