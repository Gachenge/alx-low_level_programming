#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print whole numbers
 *
 * @n: input
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("%d", n);
}
