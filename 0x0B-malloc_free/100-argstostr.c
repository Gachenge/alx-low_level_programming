#include "main.h"

/**
 * argstostr - concantenate all arguments
 * @ac: count
 * @av: pointer to poin
 * Return: zore
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, l, m = 0, length = 0;
	char *str;

	if (ac < 1 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		length++;
	}
	length++;

	str = malloc(sizeof(char) * length);
	if (str == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
		{
			str[m] = av[k][l];
			m++;
		}
		str[m] = '\n';
		m++;
	}
	str[m] = '\0';

	return (str);
}
