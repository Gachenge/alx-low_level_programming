#include "main.h"

/**
 * _sqrt - find sqrt
 * @n: integer
 * @x: number
 * Return: sqrt
 */

int _sqrt(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	return (_sqrt(x + 1, n));
}

/**
 * _sqrt_recursion - find the sqrt
 * @n: integer
 * Return: silo
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
