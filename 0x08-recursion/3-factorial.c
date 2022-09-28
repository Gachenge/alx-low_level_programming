#include "main.h"

/**
 * factorial - recursion multiply
 * @n: integer input
 * Return: always o
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
