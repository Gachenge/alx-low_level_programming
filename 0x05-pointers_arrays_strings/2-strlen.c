#include "main.h"

/**
 * _strlen - lets find out the length of a string
 * @s: the string
 * Return: nil
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
