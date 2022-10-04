#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to a new string
 * @str: string
 * Return: zero
 */

char *_strdup(char *str)
{
	char *s;
	int i, j, length;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	length++;

	s = malloc(sizeof(char) * (length));

	if (s == NULL)
		return (NULL);

	for (j = 0; j < length; j++)
		s[j] = str[j];

	return (s);
}
