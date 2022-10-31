#include "main.h"

/**
 * print_binary - convert from decimal
 * @n: the integer
 */

void print_binary(unsigned long int n)
{
	int i, ans, flag = 0;

	for (i = 31; i >= 0; i--)
	{
		ans = n >> i;
		if (ans & 1)
		{
			_putchar(1 + '0');
			flag = 1;
		}
		else if (flag)
			_putchar(0 + '0');
	}
	if (!n)
		_putchar(0 + '0');
}
