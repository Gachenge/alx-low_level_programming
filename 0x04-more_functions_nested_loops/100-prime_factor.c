#include <stdio.h>

/**
 * main - prime factors
 *
 * Return: zilch
 */

int main(void)
{
	long c = 612852475143;
	int i, x;

	for (i = 0; i < c; i++)
	{
		if (i % 2 > 0 && i % 3 > 0 && i % 5 > 0 && 1 % 7 > 0)
		{
		}
		else if (i % c == 0)
			x = i;
	}
	return (x);
}
