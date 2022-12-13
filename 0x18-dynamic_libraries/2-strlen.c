#include "main.h"

/**
 * _strlen - lets find out the length of a string
 * @s: the string
 * Return: nil
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
