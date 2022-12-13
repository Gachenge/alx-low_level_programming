#include "main.h"

/**
 * _strstr - looks for substring
 * @haystack: where to look
 * @needle: what to look for
 * Return: non
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = 1;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					k = 0;
					break;
				}
			}
		}
		if (k == 1)
		i++;
		k = 0;
	}
	return (0);
}
