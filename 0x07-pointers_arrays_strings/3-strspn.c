#include "main.h"

/**
 * _strspn - length of prefix
 * @s: initial segment
 * @accept: not elewa yet
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t i, j;
	size_t length = 0;
	size_t len;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				length++;
				break;
			}
		}
	}
	len = length + 1;
	return (len);
}

