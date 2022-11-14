#include "main.h"

/**
 * _strstr - looks for substring
 * @haystack: where to look
 * @needle: what to look for
 * Return: non
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (0);
}
