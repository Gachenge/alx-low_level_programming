#include "main.h"

/**
 * print_number - putchhar to pprint numbers
 * @n: the number
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
