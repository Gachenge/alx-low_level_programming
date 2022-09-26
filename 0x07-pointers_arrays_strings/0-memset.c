#include "main.h"

/*
 * _memset - fill a memory with null
 * @s: pointer to beginning of memory address
 * @b: holder for whatever we fill it with
 * @n: incremet
 * Return: zilch
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (0);
}
