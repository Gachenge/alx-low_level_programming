#include "main.h"

/**
 * puts2 - every pther
 * @str: input
 * Return: always 0
 */

void puts2(char *str)
{
	for (str = &str[0]; *str != '\0'; str += 2)
{
	while (*str == '\0')
	{
		_putchar(*str);
	}
}
	_putchar('\n');
}