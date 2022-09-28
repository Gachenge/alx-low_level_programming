#include "main.h"

/**
 * _prime - optimus
 * @x: number
 * @y: holder
 * Return: 1 or 0
 */

int _prime(int x, int y)
{
	if (y < 2)
		return (0);
	if (y % x == 0)
		return (0);
	if (x > y / 2)
		return (1);
	return (_prime(x + 1, y));
}

/**
 * is_prime_number - checks for prime number
 * @n: the number to be checked
 * Return: selo
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_prime(2, n));
}
