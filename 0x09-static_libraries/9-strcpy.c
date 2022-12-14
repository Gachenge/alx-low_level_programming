#include "main.h"

/**
 * *_strcpy - copies one to other
 * @dest: destination
 * @src: sourse
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
