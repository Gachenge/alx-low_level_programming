#include "main.h"

/**
 * _strchr - search and return to first occurrence
 * @s: the string
 * @c: what we look for
 * Return: null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	if (s[i] == c)
		return (s + i);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
