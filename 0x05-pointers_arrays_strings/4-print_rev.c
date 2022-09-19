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
	char tmp;

while (*s != '\0')
{
	length++;
	s++;
}
for (i = 0; i < length - 1; i++)
{
	tmp = s[i];
	s[i] = s[length - 1 - i];
	s[length - 1 - i] = tmp;
	_putchar(s);
}
_putchar('\n');
}
