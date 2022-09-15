#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: input
 * Return: 1 0r 0
 */

int _isupper(int c)
{
	int x;

	if (c >= 'a' && c <= 'z')
	{
		x = 0;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		x = 1;
	}
	_putchar('\n');
	return (x);
}
