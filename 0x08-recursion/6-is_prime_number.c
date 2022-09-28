#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: the number to be checked
 * Return: selo
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	else if (n % i != 0 && i < n)
	{
		i++;
		is_prime_number(n-i);
		return (1);
	}
	else if (n % i == 0)
		return (0);
	return (0);
}
