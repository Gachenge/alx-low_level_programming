#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concantenate two strings
 * @s1: first string
 * @s2: second string
 * Return: zero
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k, length;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		i = 0;
	if (s2 == NULL)
		j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	length = i + j + 1;

	str = malloc(sizeof(char) * length);

	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (k = 0; k < j; k++)
		str[k + i] = s2[k];

	str[i + j] = '\0';

	return (str);
}
