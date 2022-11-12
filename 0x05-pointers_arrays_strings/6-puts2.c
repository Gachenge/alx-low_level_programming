#include "main.h"

/**
 * puts2 - every pther
 * @str: input
 * Return: always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
