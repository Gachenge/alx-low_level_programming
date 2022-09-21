#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: depends
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	while ((*s1 != 0 && *s2 != 0) && s1 == s2)
	{
		if (s1 == s2)
			x = 0;
		else
			x = s1 - s2;
	}
	return (x);
}
