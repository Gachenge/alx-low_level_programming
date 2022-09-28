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
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
		_putchar('\n');
}
