#include "main.h"

/**
 * more_numbers - output alot of numbers
 * Return: 0
 */

void more_numbers(void)
{
	int i, j, x, y;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			x = j;
			else
			{
				y = j / 10;
				x = j % 10;
				_putchar(y + '0');
			}
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
