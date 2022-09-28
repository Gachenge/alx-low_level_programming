#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to print
 * Return: 0
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s);
		s++;
	}
	else if (*s == '\0')
		_putchar('\n');
}
