#include "main.h"

/**
 * *str_concat - concantenate
 * @s1: first string
 * @s2: second string
 * Return: nil
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k;

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i] != '\0'; i++)
			;
	if (s2 == NULL)
		j = 0;
	else
		for (j = 0; s2[j] != '\0'; j++)
			;
	str = malloc(sizeof(char) * (i + j + 1));

	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for ( k = 0; k < j; k++)
		str[k + i] = s2[k];
	str[k + i] = '\0';
	return (str);
}
