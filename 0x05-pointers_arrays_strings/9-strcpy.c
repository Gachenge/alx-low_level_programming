#include "main.h"

/**
 * *_strcpy - copies one to other
 * @dest: destination
 * @src: sourse
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (!src)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
