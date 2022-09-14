#include "stdio.h"

/**
 * jack_bauer - print all time od day
 *
 * Return: zilch
 */

void jack_bauer(void)
{
	int hr, min;

for (hr = 0; hr <= 23; hr++)
{
for (min = 0; min <= 59; min++)
{
int i, j, k, l;

		i = min / 10;
		j = min % 10;
		k = hr / 10;
		l = hr % 10;
		_putchar(k + '0');
		_putchar(l + '0');
		_putchar(':');
		_putchar(i + '0');
		_putchar(j + '0');
		_putchar('\n');
}
}
		return (0)
}
