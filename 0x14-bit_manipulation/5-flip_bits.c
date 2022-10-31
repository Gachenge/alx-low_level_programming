#include "main.h"

/**
 * flip_bits - find difference
 * @n: one number
 * @m: to the other
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int int x, count = 0;

	x = (n ^ m);
	while (x)
	{
		x = x & (x - 1);
		count++;
	}
	return (count);
}
