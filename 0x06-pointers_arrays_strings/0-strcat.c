#include "main.h"

/**
 * _strcat - concatenates
 * @dest: destination
 * @src: source
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	char *c;

	c = dest;
	while (*src != '\0')
	{
	src++;
	}
	while (*dest != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (c);
}
