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
		n = n * -1;
		_putchar('-');
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
