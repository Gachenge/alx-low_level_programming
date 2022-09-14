#include "main.h"

/**
 * print_last_digit - looks for the last digit in a number
 * @x: input
 * Return: zilch
 */

int print_last_digit(int x)
{
	int i;

	i = x % 10;
if (i < 0)
{
	i = (i * -1);
}
	return (i);
}
