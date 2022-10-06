#include "main.h"

/**
 * string_nconcat - concantenate
 * @s1: first string
 * @s2: second string
 * @n: final length
 * Return: nil
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *str;

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
	if (j > n)
		j = n;
	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (l = 0; l < j; l++)
		str[l + i] = s2[l];
	str[i + j] = '\0';
	return (str);
}
