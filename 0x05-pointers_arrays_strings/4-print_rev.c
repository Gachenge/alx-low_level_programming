#include "main.h"

/**
 * print_rev - reverse a string
 * @s: string input
 * Return: always 0
 */

void print_rev(char *s)
{
	int i = 0;
	int length = 0;
	char temp;

	while (s[i++])
	{
		length++;
	}

	for (i = length - 1; i >= length / 2; i--)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
