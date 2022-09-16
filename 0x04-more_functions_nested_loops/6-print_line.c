#include "main.h"

/**
 * print_line - alot of underscore
 * @n: number of underscore
 * Return: zilch
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (n == 0 || n < 0)
		{
			continue;
		}
			_putchar('_');
	}
	_putchar('\n');
}
