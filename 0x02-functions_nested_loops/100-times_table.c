#include "main.h"
/**
 * print_times_table - print multiplication
 *
 * Return:zilch
 */

void print_times_table(int n)
{
	int i, j, k;

if (n <= 15 && n >= 0)
{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (k >= 10 && k < 100)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (k >= 100)
			{
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
}
