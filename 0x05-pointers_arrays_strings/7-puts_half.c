#include "main.h"

/**
 * puts_half - print half a string
 * @str: input
 * Return: always 0
 */

void puts_half(char *str)
{
	int i, n, length = 0;

	while (*str != '\0')
	{
		str++;
		length++;
	}
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else if (length % 2 != 0)
	{
		n = (length - 1) / 2;
	}
	for (i = n; i <= length; i++)
	{
		_putchar(*str[i]);
	}
	_putchar('\n');
}
