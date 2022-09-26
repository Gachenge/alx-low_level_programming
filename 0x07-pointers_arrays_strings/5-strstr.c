#include "main.h"

/**
 * _strstr - looks for substring
 * @haystack: where to look
 * @needle: what to look for
 * Return: non
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
				return (needle);
		}
	}
	if (needle[j] == haystack[i])
		return (needle);
	return (0);
}
