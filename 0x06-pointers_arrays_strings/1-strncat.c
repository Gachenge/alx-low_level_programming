#include "main.h"

/**
 * _strncpy - copy alll
 * @dest: destination
 * @src: source
 * @n: integer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, destLen, j = 0;
	while (dest[j] != '\0')
		{
			j++;
		}
	destLen = j;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destLen + i] = src[i];
	dest[destLen + i] = '\0';
	return (dest);
}
