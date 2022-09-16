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
		if (i % c == 0)
			x = i;
	}
	return (x);
}
