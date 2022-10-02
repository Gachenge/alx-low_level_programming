#include "main.h"

/**
 * _puts - output string
 * @str: i/o string
 * Return: null
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
