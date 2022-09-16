#include "main.h"

/**
 * print_triangle - pattrens
 * @size: how big
 * Return: zilch
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			if (j < (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
