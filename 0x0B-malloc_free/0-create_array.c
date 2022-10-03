#include "main.h"
#include <stdlib.h>

/**
 * create_array - initialise an array
 * @size: size of the array
 * @c: is this the 
 * Return: zero
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	if (*str == '\0')
		return (NULL);
	return (str);
}
