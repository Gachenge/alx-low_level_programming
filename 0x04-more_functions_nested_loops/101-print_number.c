#include "main.h"

/**
 * print_number - putchar long number
 * @n: big scary number
 * Return: zilch
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 10 && n > 0)
	{
		_putchar(n + '0');
	}
	else if (n >= 10)
	{
		print_number(n / 10);
	_putchar((n % 10) + '0');
	}
}
