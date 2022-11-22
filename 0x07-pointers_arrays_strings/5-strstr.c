#include "main.h"

/**
 * _strstr - looks for substring
 * @haystack: where to look
 * @needle: what to look for
 * Return: non
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
		return (haystack);
	while (*haystack++)
	{
		if (*needle)
			break;
		else if (!*needle)
			return (NULL);
	}
	return (needle);
}
