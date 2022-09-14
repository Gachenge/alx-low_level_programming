#include "main.h"

/**
 * print_to_98 - print whole numbers
 *
 * @n: input
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98 && n >= 0)
	{
		while (n <= 98 && n < 10)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
		while (n <= 98 && n > 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}

	}
	else if (n > 98)
	{
		while (n > 98)
		{
			if (n / 10)
				_putchar(n / 10);
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else if (n < 0)
	{
		n = n * -1;
		while (n < 98)
		{
			_putchar('-');
		_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
}
}

