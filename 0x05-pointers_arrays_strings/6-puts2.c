#include "main.h"

/**
 * puts2 - every pther
 * @str: input
 * Return: 0
 */
void puts2(char *str)
{
	int len = 0, i;

	while (str[len])
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
