#include "main.h"

/**
 * _strdup - copy of string
 * @str: original string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *s;
	int i, j, length;

	if (str == NULL)
		return (NULL);
	for ( i = 0; str[i] != '\0'; i++)
		;
	length = i + 1;
	s = malloc(sizeof(char) * length);

	for (j = 0; j < i; j++)
		s[j] = str[j];
	return (s);
}
