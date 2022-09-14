#include "main.h"

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
		_putchar('0' + k);
		_putchar('0' + l);
		_putchar(':');
		_putchar('0' + i);
		_putchar('0' + j);
		_putchar('\n');
}
}
}
