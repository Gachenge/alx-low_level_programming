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

	for (i = c/2; i > 1; i--)
	{
		if (c % i == 0)
		{
	if ((i % 2 !=0) && (i % 3 !=0) && (i % 5 != 0) && (i %7 !=0))
					{
					x = i;
					}
		}
	}
	printf("%d\n", x);
	return (0);
}

