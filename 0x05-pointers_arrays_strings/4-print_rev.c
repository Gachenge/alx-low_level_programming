#include "main.h"

/**
 * print_rev - reverse a string
 * @s: string input
 * Return: always 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
