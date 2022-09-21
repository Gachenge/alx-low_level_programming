#include "main.h"

/**
 * _strcat - concatenates
 * @dest: destination
 * @src: source
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);
}
