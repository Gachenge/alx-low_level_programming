#include "main.h"

/**
 * print_diagonal - alot of slashes
 * @n: number of slashes
 * Return: zilch
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		if (n == 0 || n < 0)
		{
			continue;
		}
		for (j = i; j >= 0; j--)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
